import sys

def main():
    input = sys.stdin.readline
    n = int(input().strip())
    events = list(map(int, input().split()))

    free = 0        # policías disponibles
    untreated = 0   # crímenes sin atender

    for e in events:
        if e == -1:
            if free > 0:
                free -= 1
            else:
                untreated += 1
        else:
            free += e

    print(untreated)

if __name__ == "__main__":
    main()
