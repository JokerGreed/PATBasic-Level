#1004 成绩排名 

n=int(input())

name=[]
num=[]
grade=[]

#录入信息
for i in range(n):
    a=input().split()
    name.append(a[0])
    num.append(a[1])
    grade.append(int(a[2]))

good=-1
bad=101
good_num=-1
bad_num=-1

for i in range(len(grade)):
    if grade[i]>good:
        good=grade[i]
        good_num=i
    if grade[i]<bad:
        bad=grade[i]
        bad_num=i

print(name[good_num]+' '+num[good_num])
print(name[bad_num]+' '+num[bad_num])