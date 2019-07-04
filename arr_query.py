x = int(input())
array1 = []
for i in range(0,x):
    y = input()
    array1.append(y)
z = int(input())

array2 = []
for i in range(0,z):
    l = input()
    array2.append(l)

for i in array2:
    count = 0
    for j in array1:
        if i == j:
            count += 1
    print(count)



