testcase = int(input())

for i in range(testcase):
    a,b = map(int, input().split())
    print("Case #{}: {}".format(i+1, a+b), end ='\n')