num1, num2 = map(int, input().split())
result = 0

for i in range(2, num2 + 1, 2):
    result += num1 ** i

print(result)
