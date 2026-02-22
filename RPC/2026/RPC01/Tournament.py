n = int(input())

m = 1 << (n.bit_length() - 1)

ans = 2 * (n - m)

print(ans)