# SORTING USING BUBBLE SORT

array = [92,65,28,98,102,2,555,78,63] # TEST ARRAY
length = len(array)
for i in range(length):   # BUBBLE SORT
    for j in range(0, length-i-1):
        if array[j] > array[j+1] :
            array[j], array[j+1] = array[j+1], array[j]
            
print(array)
