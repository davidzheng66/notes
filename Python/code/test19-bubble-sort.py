def bubble_sort(list):
    for i in range(len(list) - 1, 0, -1):
        for j in range(i):
            if list[j] > list[j + 1]:
                list[j], list[j + 1] = list[j + 1], list[j]

nums = [10, 5, 1, 8, 9]

bubble_sort(nums)

print(nums)