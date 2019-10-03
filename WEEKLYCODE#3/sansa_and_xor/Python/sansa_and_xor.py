#taking inputs
for _ in range(int(input())):
    N = int(input())
    A = tuple(map(int,input().split()))
    X = 0
    #if n is odd ,then result is xor of even indexed elements otherwise 0
    for i, x in enumerate(A):
        if ((i+1) * (N-i)) % 2 == 1:
            X ^= x
    #printing result
    print(X)