nums = [10, 20, 30, 40, 80]
for i in nums:
    print(i)
print('==============')
it = iter(nums)
print(it.__next__())
print(it.__next__())

print('==============')
print(next(it))
print(next(it))

print('===== class =====')
class TopTens:
    def __init__(self):
        self.num = 1

    def __iter__(self):
        return self

    def __next__(self):
        if(self.num <= 10):
            value = self.num
            self.num += 1
            return value
        else:
            raise StopIteration

values = TopTens()
print(next(values))
for value in values: # not repeat 1
    print(value)


