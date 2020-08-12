from functools import reduce

f = lambda a,b:a+b
print(f(3,4))

nums = [1,2,3,4,5,6,7.8]

evens = list(filter(lambda n : n % 2 == 0, nums))
print(evens)

doubles = list(map(lambda n : n*2, evens))
print(doubles)

sum = reduce(lambda a,b:a+b, doubles)
print(sum)


