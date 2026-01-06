import math
n,m = map(int, input().split())

"""
2 4 = 4

8 

**
**
**
**

3 3 = 4

***
***
***


1 15

8

7

"""

number = n*m

print(math.floor(number/2))

