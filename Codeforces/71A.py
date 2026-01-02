n = int(input())

for _ in range(n):
    word = input().strip()

    size = len(word)

    if(size<=10):
        print(word)
    else:
        print(word[0]+str(size-2)+word[-1])
  
 