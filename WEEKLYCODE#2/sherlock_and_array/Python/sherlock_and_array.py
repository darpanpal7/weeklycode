#for each test case
for t in xrange(input()):
    #taking input
    n = input()
    a = map(int, raw_input().split())
    x = 0
    #total sum
    y = sum(a)
    ans = False
    #checking for element
    for i in xrange(n):
        y -= a[i]
        if x == y:
            ans = True
        x += a[i]
    #printing result
    print 'YES' if ans else 'NO'