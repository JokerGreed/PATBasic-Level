# 1002 写出这个数

s=input()
sum=0

#列表的定义和使用
str_s=['ling','yi','er','san','si','wu','liu','qi','ba','jiu']

#输入的数字各个加和
for chr1 in s:
    sum=sum+int(chr1)
str_sum=str(sum)
#k记录空格
k=0

result=''
for chr2 in str_sum:
    num=int(chr2)
    result=result+str_s[num]
    k=k+1
    if k!=len(str_sum):
        result+=' '

print(result)   