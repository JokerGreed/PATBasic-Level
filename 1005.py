#1005 继续(3n+1)猜想

def Callatz(n):
    if n%2==0:
        n=n/2
    else:
        n=(3*n+1)/2
    return n

n=input()
m=input().split()
for i in range(len(m)):
    m[i]=int(m[i])
result=m[0:len(m)]
for i in m:
    a=i
    while a>1:
        a=Callatz(a)
        if a in result:
            result.remove(a)
result.sort(reverse=True)
if len(result)==1:
    print(result[0],end='')
else:
    for i in range(len(result)-1):
        print(result[i],end=' ')
    print(result[i+1],end='')