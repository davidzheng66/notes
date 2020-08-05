from numpy import array

arr1 = array([1,2,3,4,5])
arr2 = arr1 # aliasing
arr3 = arr1.view() # shallow copy
arr4 = arr1.copy() # deep copy

arr1[0] = 10
print(arr1)
print(arr2)
print(arr3)
print(arr4)
print(id(arr1))
print(id(arr2))
print(id(arr3))
print(id(arr4))
