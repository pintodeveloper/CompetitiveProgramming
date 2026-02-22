age1, amount1 = map(int, input().split())
age2, amount2 = map(int, input().split())
age3 = int(input())


years1 = max(0, age3 - age1)
years2 = max(0, age3 - age2)


total1 = years1 * amount1
total2 = years2 * amount2


if total1 >= total2:
    print(1)
else:
    print(2)