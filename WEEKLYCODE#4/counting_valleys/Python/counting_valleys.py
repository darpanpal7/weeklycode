# Solution uses a two pointer technique, 
# we check if current step leads to height 0 and previous height was -ve.  
height = 0
prev_height = 0
c = 0
n = input()
s = input().strip()
for i in range(len(s)):
    if (s[i] == 'U'):
        height += 1
    elif s[i] == 'D':
        height -= 1
    if height == 0 and prev_height < 0:
        c += 1
    prev_height = height
#printing result
print (c)