import sys
#taking inputs
n = int(input().strip())
types = list(map(int, input().strip().split(' ')))
counts = [0,0,0,0,0,0]
#using indexed based increment for frequency 
for bird in types:
    counts[bird] += 1
result = 0
#checking for maximum frequency
for x in range(6):
    if counts[x] > counts[result]:
        result = x
#printing result
print(result)