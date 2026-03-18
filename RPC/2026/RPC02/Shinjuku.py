def to_seconds(t):
    hh = int(t[0:2])
    mm = int(t[3:5])
    ss = int(t[6:8])
    return hh * 3600 + mm * 60 + ss


n, m = map(int, input().split())

arrivals = [to_seconds(input().strip()) for _ in range(n)]
departures = [to_seconds(input().strip()) for _ in range(m)]

s = int(input())

ans = float('inf')

for a in arrivals:
    for d in departures:
        wait = d - a
        if wait >= s:
            ans = min(ans, wait)

print(-1 if ans == float('inf') else ans)