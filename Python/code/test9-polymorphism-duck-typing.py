class Pycharm:
    def execute(self):
        print('compiling')
        print('running')

class MyEditor:
    def execute(self):
        print('spell check')
        print('compiling')
        print('running')


class Laptop:
    def code(self, ide):
        ide.execute()

lap = Laptop()

ide = Pycharm()
lap.code(ide)
print('=========================')
ide = MyEditor()
lap.code(ide)