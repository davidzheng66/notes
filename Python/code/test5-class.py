class Computer:
    core = 5
    def __init__(self):
        self.name = "Apple"
        self.cpu = "i5"

    def config(self):
        print("hello")

c1 = Computer()
c2 = Computer()
print((c1.__sizeof__()))
print(Computer.core)
print(c1.core)
c1.core = 6
print(c1.core)
print(c2.core)
print(Computer.core)

print("===========")
Computer.core = 8

print(c1.core)
print(c2.core)
print(Computer.core)

