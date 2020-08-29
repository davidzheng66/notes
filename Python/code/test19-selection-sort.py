def selection_sort(list):
    for i in range(len(list) - 1):
        minpos = i
        for j in range(i, len(list)):
            if list[j] < list[minpos]:
                minpos = j

        list[i], list[minpos] = list[minpos], list[i]

nums = [10, 5, 1, 8, 9]

selection_sort(nums)

print(nums)