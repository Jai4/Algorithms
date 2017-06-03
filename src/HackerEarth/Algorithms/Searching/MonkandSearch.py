import bisect
number=0;united=[];queries=0;x=[];
def getinp():
    global number;global united;global queries;global x;
    number=int(input());
    united=list(map(int,input().split()));
    united.sort()
    queries=int(input());
    compute();
def compute():
    global number;global united;global queries;global x;
    for t in range(queries):
        x=list(map(int,input().split()))
        if(x[0]==0):
           tem=bisect.bisect_left(united,x[1],lo=0,hi=len(united))
           if(tem==len(united)):
               print(0);
           else:
               print(number-tem)
        else:
           tem=bisect.bisect_right(united,x[1],lo=0,hi=len(united))
           if(tem==len(united)):
               print(0);
           else:
               print(number-tem)
        x.clear();
getinp()