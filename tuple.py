
tuple_array = (1,2,3)

list_array1 = [[1,2],
               [3,4]]

list_array2 = [[5,6],
              [7,8]]
i = 0
j = 0
k = 0
l = 0
count = 0

result = [[0,0],
          [0,0]]


for i in range(len(list_array1)):
    for j in range(len(list_array2)):
        for k in range(len(list_array2)):
            result[i][j] += list_array1[i][k] * list_array2[k][j]

print(range(len(list_array2)))
print(result)

   