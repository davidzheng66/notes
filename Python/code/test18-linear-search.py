def linear_search(list, n):
    i = 0
    while i < len(list):
        if list[i] == n:
            return True
        i += 1

    return False

list = [1,2,3,4,5,6]
n = 5

if linear_search(list, n):
    print('Found')
else:
    print('Not Found')