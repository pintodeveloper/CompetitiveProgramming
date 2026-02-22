
a = list(map(int, input().split()))


total = 1
for ai in a:
    total *= (ai + 1)

print(total - 1)