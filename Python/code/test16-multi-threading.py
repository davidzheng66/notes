from threading import Thread
from time import sleep

class Hello(Thread):
    def run(self):
        for i in range(5):
            print('Hello')
            sleep(1)

class Hi(Thread):
    def run(self):
        for i in range(5):
            print('Hi')
            sleep(1)

thread1 = Hello()
thread2 = Hi()

thread1.start()
sleep(0.1)
thread2.start()

thread1.join()
thread2.join()

print('bye')