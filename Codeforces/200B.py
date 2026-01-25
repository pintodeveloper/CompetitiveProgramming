n = int(input())

volumen = list(map(int, input().split(" ")))

total = 0

for i in volumen:
    total += i

total /=n

print(f" {total:.12f}") 