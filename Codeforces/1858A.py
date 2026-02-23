import sys

input = sys.stdin.readline
t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    if a == b:
        print("First" if c % 2 == 1 else "Second")
    else:
        print("First" if a > b else "Second")