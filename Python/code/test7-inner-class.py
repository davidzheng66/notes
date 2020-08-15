class Student: # outer class
    def __init__(self, name, rollno):
        self.name = name
        self.rollno = rollno
        self.lap = self.Laptop('HP', 'i5', '1TB')

    def show(self):
        print(self.name, self.rollno)
        self.lap.show()


    class Laptop: # inner class
        def __init__(self, brand, cpu, ram):
            self.brand = brand
            self.cpu = cpu
            self.ram = ram

        def show(self):
            print(self.brand, self.cpu, self.ram)

s1 = Student('david', 101)
s1.show()

# print(s1.Laptop('Dell', 'i6', '2TB').show())
s1.Laptop('Dell', 'i6', '2TB').show()

lap1 = Student.Laptop('Sony', 'i7', '3TB')
lap1.show()