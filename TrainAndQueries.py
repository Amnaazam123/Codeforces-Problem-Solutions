#Problem statement:
#Along the railroad there are stations indexed from 1 to 109. An express train always travels along a route consisting of n stations with indices u1,u2,…,un, where (1≤ui≤109).
#The train travels along the route from left to right. It starts at station u1, then stops at station u2, then at u3, and so on. Station un — the terminus.
#It is possible that the train will visit the same station more than once. That is, there may be duplicates among the values u1,u2,…,un.
#You are given k queries, each containing two different integers aj and bj (1≤aj,bj≤109). For each query, 
#determine whether it is possible to travel by train from the station with index aj to the station with index bj.
#For example, let the train route consist of 6 of stations with indices [3,7,1,5,1,4] and give 3 of the following queries:
#a1=3, b1=5
#It is possible to travel from station 3 to station 5 by taking a section of the route consisting of stations [3,7,1,5]. Answer: YES.
#a2=1, b2=7
#You cannot travel from station 1 to station 7 because the train cannot travel in the opposite direction. Answer: NO.
#a3=3, b3=10
#It is not possible to travel from station 3 to station 10 because station 10 is not part of the train's route. Answer: NO.


T = int(input())
while T > 0:
    input()
    stations,queries=input().split(" ");
    stations = int(stations)
    queries = int(queries)
    
    lst = []
    b = True
    lst = [int(item) for item in input().split()] 
    for i in range(0, queries):
        myLst=[]
        b=True
        QA,QB=input().split(" ");
        QA = int(QA)
        QB = int(QB)
        if QA in lst:
            idxA = lst.index(QA)
            myLst = lst[idxA:]
            if QB in myLst:
                print("YES")
                continue
            else:
                print("NO")
                continue
        print("NO")
    T=T-1;
    
