#taking input
ar=[int(x) for x in input().split()]
#sorting
ar.sort()
#printing 
print(sum(ar[0:4]),sum(ar[1:5]))
