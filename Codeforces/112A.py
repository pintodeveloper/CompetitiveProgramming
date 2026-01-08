string1 = input().lower()
string2 = input().lower()

#print(string1)
#print(string2)


output = 0
first = 0
seconds = 0


for i in range(len(string1)):
    if string1[i] < string2[i]:
        first+=1
        break
    elif string1[i] > string2[i]:
        seconds+=1
        break

if first == seconds:
    print(0)
elif first > seconds:
    print(-1)
else:
    print(1)

