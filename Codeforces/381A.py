n = int(input())                      
cards = list(map(int, input().split()))

left = 0
right = n - 1

sereja = 0
dima = 0


for turno in range(n):

    if cards[left] >= cards[right]:
        tomada = cards[left]
        left += 1
    else:
        tomada = cards[right]
        right -= 1

    if turno % 2 == 0:
        sereja += tomada
    else:
        dima += tomada

print(sereja, dima)