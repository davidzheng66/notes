pos = -1
def binary_search(list, n):
    low = 0
    high = len(list) - 1

    while low <= high: # '=' is important
        mid = (low + high) // 2
        print('mid = ', mid)
        if list[mid] == n:
            globals()['pos'] = mid
            return True
        elif list[mid] < n:
            low = mid + 1
            print('low = ', low)
        else:
            high = mid - 1
            print('high = ', high)

    return False

list = [1,2,3,4,5,6,7]
n = 1

if binary_search(list, n):
    print('Found at ', pos + 1)
else:
    print('Not Found')