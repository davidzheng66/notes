f1 = open('test17-mydata', 'r')
# print(f1.read())

# print('==============')

f2 = open('test17-write', 'w')

for data in f1:
    # print(data)
    f2.write(data)

f3 = open('test17-mydata', 'rb')
f4 = open('test17-write', 'ab')

for data in f3:
    # print(data)
    f4.write(data)
