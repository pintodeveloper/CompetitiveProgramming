n1,n2,n3,n4 = map(int, input().split(" "))

output = 0

if n1 == n2 or n1 == n3 or n1 == n4:
    output+=1
if n2 == n3 or n2 == n4:
    output+=1
if n3 == n4:
    output+=1
    
print(output)


