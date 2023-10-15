
t=int(input())
while t:
    n=int(input())
    while n:
        print(n%10, end=" ")
        n=n//10
    print()
    t=t-1