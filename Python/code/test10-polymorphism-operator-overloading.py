class Student:
    def __init__(self, m1, m2):
        self.m1 = m1
        self.m2 = m2

    def __add__(self, other):   # overloading +
        m1 = self.m1 + other.m1
        m2 = self.m2 + other.m2
        s3 = Student(m1, m2)
        return s3

    def __gt__(self, other):    # overloading >
        r1 = self.m1 + other.m1
        r2 = self.m2 + other.m2
        return r1 > r2

    def __str__(self):
        return '{},{}'.format(self.m1, self.m2)



s1 = Student(80, 100)
s2 = Student(90, 91)

s3 = s1 + s2
print(s3.m1)
print('===================')
if(s1 > s2):
    print('s1 wins')
else:
    print('s2 wins')

print('===================')
print(s3.__str__())
print(s3)

