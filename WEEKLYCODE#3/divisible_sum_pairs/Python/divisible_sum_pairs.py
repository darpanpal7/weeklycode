import sys
#taking inputs
n,k = input().strip().split(' ')
n,k = [int(n),int(k)]
a = [int(a_temp) for a_temp in input().strip().split(' ')]
counter = 0
#cheecking condition
for i in range(len(a)):
    for j in range(i + 1, len(a)):
        if (a[i] + a[j]) % k == 0:
            counter += 1
#printing result
print(counter)