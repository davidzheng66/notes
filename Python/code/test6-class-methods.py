class Students:
    school = 'Concordia University'

    def __init__(self, m1, m2, m3):
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3

    def avg(self):
        return (self.m1 + self.m2 + self.m3)/3

    # accessor method
    def get_m1(self):
        return self.m1
    # mutator method
    def set_m1(self, m1):
        self.m1 = m1

    @classmethod
    def get_school(cls):
        return cls.school

    @staticmethod
    def info():
        return 'This is a school in Montreal, Quebec'

s1 = Students(90,20, 10)
print(s1.avg()) # good way
print(s1.get_school())
print(s1.info())
print(Students.get_school()) # good way
print(Students.info()) # good way

