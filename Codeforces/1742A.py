n = int(input())

a=0
b=0
c=0

for _ in n:
    a = int(input())
    b = int(input())
    c = int(input())
    
    if a+b == c:
        print("YES")
    elif a + c == b:
        print("YES")
    elif b+c == a:
        print("YES")
    else:
        print("NO")
