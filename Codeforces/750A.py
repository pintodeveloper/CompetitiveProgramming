n , k = map(int, input().split())

enableTime = 240 - k
time_usade = 0
problem_result = 0


for i in range(1, n+1):
    time_usade += 5*i
    if time_usade > enableTime:
        break
    problem_result +=1
    
print(problem_result)
