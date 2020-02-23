#1003 我要通过！

n=int(input())

#judge判断的核心
def judge():
    s=input()
    numP=0
    numA=[0,0,0]
    numT=0
    for ch in s:
        if ch!='P' and ch!='A' and ch!='T':
            return False
        
        if ch=='P':
            numP+=1
            if numP>1 or numT!=0:
                return False
        
        if ch=='T':
            numT+=1
            if numT>1 or numP==0:
                return False
        
        if ch=='A':
            if numP==0 and numT==0:
                numA[0]+=1
            if numP!=0 and numT==0:
                numA[1]+=1
            if numP!=0 and numT!=0:
                numA[2]+=1
    
    if numP==0 or numA[1]==0 or numT==0:
        return False
    if numA[0]*numA[1]==numA[2]:
        return True
    else:
        return False

while n:
    n=n-1
    if judge():
        print('YES')
    else:
        print('NO')