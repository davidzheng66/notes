a = 10
b = 3
try:
    print('Open a resource')
    print(a/b)
    c = int(input('Enter a number: '))
    print(c)
except ValueError as e:
    print('Hey, invalid input, e:', e)
except ZeroDivisionError as e:
    print('Hey, you divide a number by zero, e:', e)
except Exception as e:
    print('Something goes wrong, e:', e)
finally:
    print('Close a resource')
