import sys

def solve():
    input = sys.stdin.readline
    t = int(input())
    out = []
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))

        monsters = []
        for i, hp in enumerate(a, start=1):
            r = hp % k
            b = r if r != 0 else k
            monsters.append((-b, i))  # -b para ordenar descendente

        monsters.sort()
        out.append(" ".join(str(i) for _, i in monsters))

    print("\n".join(out))

if __name__ == "__main__":
    solve()
