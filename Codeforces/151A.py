n,k,l,c,d,p, nl, np = map(int, input().split())

toasts_by_drink = (k*l)//nl
toasts_by_lime = c*d
toasts_by_salt = p // np

total_toasts = min(toasts_by_drink, toasts_by_lime, toasts_by_salt)


print(total_toasts//n)