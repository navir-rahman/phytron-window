n = int(input())

if n == 1:
    print(0, end=" ")
elif n == 2:
    print(0, 1, end=" ")
else:

    arr=[]
    arr.append(0)
    arr.append(1)
    # print(0, 1, end=" ")

    for index in range(2, n):
        arr.append(arr[index - 1] + arr[index - 2])
    for i in arr:
        print(i, end=" ")
