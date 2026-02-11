t = int(input())

for _ in range(t):
    n = int(input())
    parts = []
    pos = 1


    while(n>0):
        dig = n% 10
        if dig != 0:
            parts.append(dig*pos)
        n //=10
        pos*=10
    
    print(len(parts))
    print(*parts)
    
    
    