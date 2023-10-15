counter = int(input())

while counter > 0:
    num1, num2, sum = 0, 0, 0
    num1, num2 = map(int, input().split())
    
    min_val, max_val = min(num1, num2), max(num1, num2)

    for i in range(min_val + 1, max_val):
        if i % 2 != 0:
            sum += i

    print(sum)
    counter -= 1

    
