def main():
    n = int(input().strip())
    a = list(map(int, input().split()))

    best = a[0]
    worst = a[0]
    ans = 0

    for x in a[1:]:
        if x > best:
            ans += 1
            best = x
        elif x < worst:
            ans += 1
            worst = x

    print(ans)

if __name__ == "__main__":
    main()
