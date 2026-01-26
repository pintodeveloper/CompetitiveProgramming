n = int(input())
p = list(map(int, input().split()))

gift_from = {}


for i in range(1, n + 1):
    gift_from[p[i - 1]] = i

for i in range(1, n+1):
    print(gift_from[i], end=" ")