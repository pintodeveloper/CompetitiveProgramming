# [2,2]
import math
indexRow = -1
indexColumn = -1
for i in range(5):
    numbers = list(map(int, input().split()))
    if(1 in numbers):
        indexRow = i
        indexColumn = numbers.index(1)

distance =  abs(2-indexRow) + abs(2-indexColumn)

print(distance)
