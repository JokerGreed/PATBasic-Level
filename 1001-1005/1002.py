# 1002 写出这个数

s=input()
sum=0

#输入的数字各个加和
for chr1 in s:
    sum=sum+int(chr1)
str_sum=str(sum)

#k记录空格
k=0

result=''
for chr2 in str_sum:
    if chr2=='1':
        result=result+'yi'
    elif chr2=='2':
        result=result+'er'
    elif chr2=='3':
        result=result+'san'
    elif chr2=='4':
        result=result+'si'
    elif chr2=='5':
        result=result+'wu'
    elif chr2=='6':
        result=result+'liu'
    elif chr2=='7':
        result=result+'qi'
    elif chr2=='8':
        result=result+'ba'
    elif chr2=='9':
        result=result+'jiu'
    else:
        result=result+'ling'
    k=k+1
    if k!=len(str_sum):
        result=result+' '
    
print(result)