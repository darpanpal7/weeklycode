n=int(input())
lists=[int(_) for _ in input().split()]

plus=0
minus=0
zero=0
#calculating elements >,<,= 0
for x in lists:
    if(x>0):
        plus+=1
    elif(x<0):
        minus+=1
    else:
        zero+=1
        
plus=plus/n
minus=minus/n
zero=zero/n

round(plus,3)
round(minus,3)
round(zero,3)
#printing results
print(plus)
print(minus)
print(zero)
