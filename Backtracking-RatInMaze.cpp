/*---------------------------------------------------------------
----------     ::        RAT IN MAZE       ::        ------------
----------     ::            BY            ::        ------------
---------      ::         Amna Azam        ::        ------------
-----------------------------------------------------------------
*//*
---------------------------------------------------------------
	----------- :: REQUIREMENT :: ---------------------
------------------------------------------------------
	=> Take size of maze, source cell, destination cell and 2D binary maze input from file.
	=> Reach the mouce from source Cell to destination Cell
	=> 0- open path
	=> 1- blocked path
	=> Rat can move in 4 directions(up, left, right, down).
	=> Print the path cells and also show these cells with stars(*) on console and in output file as well.

*//*
------------------------------------------------------
	----------- :: LOGIC :: ------------
------------------------------------------------------
		=> Firstly, Make a cell on which mouce exists and push that cell in stack everytime.
		=> Mouce will follow those cells containing 0.
		=> Use bool unvisited array of maze's size to keep the track either we have visited any cell or not.
		=> Any cell visited by mouce must be marked visited so that mouce can not visit, visited cell again.
		=> When we get dead cell(the cell where no path exists for mouce to move in any direction but only back), 
		   then pop the cells from stack for backtracking(to reach at previous cell).
		=> At each cell, check all the four possiblities for mouce to move on and push each visited current cell in stack.
		=> At the end if stack is empty, then no any path found to reach at destination.
		=> Stack will contain any one path to reach the mouce at destination.

*//*-----------------------------------------------------
	-------  :: C++ IMPLEMENTATION :: ------
------------------------------------------------------*/

//-----------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include<fstream>
#include <stack>
using namespace std;
//--------------------------------------------------------------------------------------------
//To pop a cell from stack, we need explicitly pop function in class myStack 
//inherited from built-in stack.
template<class T>
class myStack : public stack<T>            
{
public:
	T pop() {
		T poped = stack<T>::top();
		stack<T>::pop();
		return poped;
	}
};
//-----------------------------------------------------------------------------------------------
class Cell {
public:
	int x, y;
	Cell(int x, int y)                              //Make a cell              
	{
		this->x = x;
		this->y = y;
	}
	bool operator == (const Cell& c) const        	//check either two cells are equal    
	{
		return x == c.x && y == c.y;
	}
};

//-----------------------------------------------------------------------------------------
//does mouce reach at destination?
bool isDestination(fstream& f,char **maze, int size, int srcX, int srcY, int desX, int desY)
{
	//-----------------------          make array to keep track for visited cells
	bool** unVisited = new bool* [size];
	for (int i = 0; i < size; i++)
		unVisited[i] = new bool[size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			unVisited[i][j] = true;             //Assume all cells are unvisited.
	//----------------------------------------------

	myStack<Cell> s;
	Cell currCell(srcX, srcY);                  //start move from source cell -------- Make source cell your current cell.
	Cell destCell(desX, desY);                 //make destination cell
	s.push(currCell);                              //push current cell in  stack
	unVisited[srcX][srcY] = false;            //Mark the source cell visited.
	while (!s.empty()) 
	{
		currCell = s.top();              
		if (currCell == destCell)             //Are we at destination cell?
		{
			myStack<Cell> s1;                //Use this stack to print the cells from source to destination noy destination to cell
			while(!s.empty())
				s1.push(s.pop());
			while(!s1.empty())
			{
				Cell n = s1.pop();
				maze[n.x][n.y] = '*';                           //Mark the correct path with stars in maze
				cout << "(" << n.x << "," << n.y << ")";        //print on console
				f << "(" << n.x << "," << n.y << ")";           //print in output file
				
			}
			return true;           //path founded
		}

		/* Checking the right direction
		-------CHECK?
		Is the right cell in our bounded limit && 
		[is it open(not conating wall i.e. 1) || is it our destination 'c'] &&
		is it invisited?*/

		if (currCell.y + 1 < size && (maze[currCell.x][currCell.y + 1] == '0' || maze[currCell.x][currCell.y + 1] =='c') && unVisited[currCell.x][currCell.y + 1])
		{
			Cell newCell(currCell.x, currCell.y + 1);
			s.push(newCell);
			unVisited[currCell.x][currCell.y + 1] = false;         //visited
		}

		/* Checking the down direction
		-------CHECK?
		Is the down cell in our bounded limit &&
		[is it open(not conating wall i.e. 1) || is it our destination 'c'] &&
		is it unvisited?*/

		else if (currCell.x + 1 < size && (maze[currCell.x + 1][currCell.y] == '0' || maze[currCell.x + 1][currCell.y] == 'c') && unVisited[currCell.x + 1][currCell.y])
		{
			Cell newCell(currCell.x + 1, currCell.y);
			s.push(newCell);
			unVisited[currCell.x + 1][currCell.y] = false;             //visited
		}

		/* Checking the up direction
		-------CHECK?
		Is the up cell in our bounded limit &&
		[is it open(not conating wall i.e. 1) || is it our destination 'c'] &&
		is it unvisited?*/

		else if (currCell.x - 1 >= 0 && (maze[currCell.x - 1][currCell.y] == '0' || maze[currCell.x - 1][currCell.y] == 'c') && unVisited[currCell.x - 1][currCell.y])
		{
			Cell newCell(currCell.x - 1, currCell.y);
			s.push(newCell);
			unVisited[currCell.x - 1][currCell.y] = false;        //visited
		}

		/* Checking the left direction
		-------CHECK?
		Is the left cell in our bounded limit &&
		[is it open(not conating wall i.e. 1) || is it our destination 'c'] &&
		is it unvisited?*/

		else if (currCell.y - 1 >= 0 && (maze[currCell.x][currCell.y - 1] == '0' || maze[currCell.x][currCell.y - 1] == 'c') && unVisited[currCell.x][currCell.y - 1])
		{
			Cell newCell(currCell.x, currCell.y - 1);
			s.push(newCell);
			unVisited[currCell.x][currCell.y - 1] = false;       //visited
		}

		//oops we were at dead cell
		else 
			s.pop();           //backtracking 
	}
	return false;              //no path found
} 

// Driver code
int main()
{
	int size;
	ifstream fin;                           // declare stream variable name
	fin.open("in.txt", ios::in);            // open file
	if (fin.fail())                         //does file exists?
		cout << "Input File does not exist...\n";
	else
	{
		fin >> size;                            //read size of maze from file
		cout << size << "\n";                   //print size on console
		int sx, sy;
		fin >> sx; fin >> sy;                   //read source cell from file
		cout << sx << " " << sy << "\n";        //print on console
		int dx, dy;
		fin >> dx; fin >> dy;                   //Read destination cell from file
		cout << dx << " " << dy << "\n";        //print on console
		char** maze = new char* [size];         //make a 2d maze  
		for (int i = 0; i < size; i++)
			maze[i] = new char[size];
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)      //read maze from file
				fin >> maze[i][j];
		fin.close();
		fstream fout;                          // declare stream variable name  for output file      
		fout.open("out.txt", ios::out);        //open a file   
		fout << size << "\n";
		fout << sx << " " << sy << "\n";       //print source cell on file  
		fout << dx << " " << dy << "\n";        //print destination cell on file
		if (isDestination(fout, maze, size, sx, sy, dx, dy))
		{
			cout << "\n\n";
			fout << "\n\n";
			for (int i = 0; i < size; ++i)
			{
				for (int j = 0; j < size; ++j)
				{
					cout << maze[i][j] << " ";       //print maze on console
					fout << maze[i][j] << " ";       //print maze on file
				}
				cout << endl;
				fout << endl;
			}
		}
		else
		{
			cout << "No Path Found!" << '\n';
			fout << "No Path Found!" << '\n';
		}
		fout.close();
	}
	cout << "\n\nProgram ended successfully....";
	return 0;
}
