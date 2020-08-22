class Student:
    def __init__(self, m1, m2):
        self.m1 = m1
        self.m2 = m2

    def sum(self, a=None, b=None, c=None): # mimic overloading
        if a!=None and b!=None and c!=None:
            return a+b+c
        elif a!=None and b!=None:
            return a+b
        elif a!=None:
            return a

class A:
    def show(self):
        print('This is class A')
class B(A):  # overriding
    def show(self):
        print('This is class B')


s = Student(90, 100)
print(s.sum(10,20,30))
print(s.sum(10,15))
print(s.sum(10))

b = B()
b.show()