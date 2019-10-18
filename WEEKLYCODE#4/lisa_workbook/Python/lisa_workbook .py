ins = [int(j) for j in input().split()]
#taking inputs
n = ins[0]
k = ins[1]
b = [int(j) for j in input().split()]
answer = 0
page = 0
#checking for each value of chapter
for chapter in b:
    page += 1
    for p in range(1, chapter+1):
        if p == page:
            answer += 1
        if p%k == 0 and p != chapter:
            page += 1
#printing answer
print (answer)