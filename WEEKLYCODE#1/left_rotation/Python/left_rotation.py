#we use the split and join
N,d=map(int,input().split())
#here we split the array from d
A=list(map(int,input().split()))
#here we concatenate the two arrays
B=A[d:]+A[:d]
#printing the array
print(' '.join([str(x) for x in B]))
