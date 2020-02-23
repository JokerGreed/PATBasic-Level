#1001 害死人不偿命的(3n+1)猜想

#输入的整数n
n=int(input())

#计数cnt
cnt=0

while True:
    if n==1:
        break
    cnt=cnt+1
    if n%2==0:
        n=n/2
    else:
        n=(3*n+1)/2

print(cnt)