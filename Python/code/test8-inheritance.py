class A:
    def __init__(self):
        # super().__init__()
        print('Init in class A')
    def feature1(self):
        print('feature 1 in class A')
    def feature2(self):
        print('feature 2 in class A')

class B():
    def __init__(self):
        super().__init__()
        print('Init in class B')
    def feature1(self):
        print('feature 1 in class B')
    def feature2(self):
        print('feature 2 in class B')

class C(A,B):
    def __init__(self):
        super().__init__()
        print('Init in class C')

# a = A()
# b = B()
c = C()



