#taking inputs
ar1=map(int,input().split())
ar2=map(int,input().split())
c1=0
c2=0
#calculating c1 & c2
for a,b in zip(ar1,ar2):
    if a>b:
        c1+=1
    if b>a:
        c2+=1
#printing results        
print(c1,c2)
