# [Python Tutorial for Beginners(Navin Reddy)](https://www.youtube.com/watch?v=DWgzHbglNIo&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=4)
## 1. Divsions
  * Integer division: /
  * Float division: //
## 2. BODMAS
![alt text](https://github.com/davidzheng66/notes/blob/master/Python/bodmas.PNG)

* Orders: x**y
* Divide: module %
## 3. Print strings
* Print raw strings: print(r'c:\docs\navin') --> c:\docs\navin
  * without "r", "\n" will be a new line
* Escape charactor "\\": print('c:\docs\\navin') --> c:\docs\navin
* Repeart strings: print(2*'hello') --> hellohello
* _ + 3: '_' is previous output
## 4. list, tup, set, dictionay
* list[]: mutalbe. [Video](https://www.youtube.com/watch?v=Eaz5e6M8tL4)
* tup(): immutable, fast than list. [Video](https://www.youtube.com/watch?v=Mf7eFtbVxFM)
* set{}: non-indexing, unique value
* dictionary{:} similar to set, but with a key/value pair. [Video](https://www.youtube.com/watch?v=2IsF7DEtVjg&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=8)
  * keys=[10, 20, 30, 40]
  * values=["aaaa", "bbbb", "cccc", "dddd"]
  * data=dict(zip(keys, values)) --> {10: 'aaaa', 20: 'bbbb', 30: 'cccc', 40: 'dddd'}
## 5. [Set path and help](https://www.youtube.com/watch?v=4V14G5_CNGg&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=9) 
* path 
   * C:\python37
   * C:\ptyhon37\Scripts
* PYTHONPATH: C:\python37
* help:
   * help() --> topics() --> LISTS
   * help('LISTS')
## 6. [Variables](https://www.youtube.com/watch?v=_OZIAHg5i7M&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=11)
* id(num) or id(10): to get the address of object num
* type(num) or type(10): to get the type of object num
## 7. [Data Types](https://www.youtube.com/watch?v=gCCVsvgR2KU&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=12)
* None
* Numeric:
  * int: int(2.3) --> 2
  * float: float(2) --> 2.0
  * complex: complex(2,3) --> 2+3j
  * bool: True, False
* Sequential:
  * list: [10,20,'aaa', 'bbb']
  * tuple: (10,20,'aaa', 'bbb')
  * set:  {10,20,'aaa', 'bbb'}
  * range: list(range(5)) --> [0,1,2,3,4] 
  * [import array](https://www.youtube.com/watch?v=6a39OjkCN5I&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=30)
    * ![alt text](https://github.com/davidzheng66/notes/blob/master/Python/typecodes.PNG)
  * [import numpy](https://www.youtube.com/watch?v=8LlXhtfNZEQ&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=32)
    * ![alt text](https://github.com/davidzheng66/notes/blob/master/Python/6WaysToCreateArray.PNG)
    * [array copy](https://www.youtube.com/watch?v=8sF85TyunQA&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=34)
      * aliasing: array1 = array
      * shallow copy: array2 = array.view()
      * deep copy: array3 = array.copy()
      * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test2-numpy.py)
* dictionary (map)
  * data = {'aaa':'python', 'bbb':'java', 'ccc':'javascript'}
  * data['aaa'] --> 'python'
  * data.get('aaa') -- > 'python'
  * data.keys() --> dict_keys(['aaa', 'bbb', 'ccc'])
  * data.values() --> dict_values(['python', 'java', 'javascript'])
## 8 [Operators](https://www.youtube.com/watch?v=v5MR5JnKcZI&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=13)
* Arithmetic: +, -, *, /, //
* Assignment: =, +=, -=, *=, /=, //=
* Relational: <, <=, ==, <=, >, !=
* Logical: and, or, not
* Unary: not
* [Bitwise: Complement(~), and(&), or(|), xor(^), left shift(<<), right shift(>>)](https://www.youtube.com/watch?v=PyfKCvHALj8&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=18)
## 9 [Numeric Converstions](https://www.youtube.com/watch?v=AWAjbtWBzGs&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=14)
* binary: bin(25) --> 0b11001
* octal: oct(25) --> 0O31
* decimal: 25
* hexadecimal: hex(25) --> 0x19
## 10 [How to swap 2 variables](https://www.youtube.com/watch?v=3dpJrMtxYeo&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=15)
* Way 1: a=a+b; b=a-b; a=a-b;
* Way 2: a=a^b; b=a^b; a=a^b;
* Way 3: a,b=b,a; (ROT_TWO())
## 11 [Input and argv to a program](https://www.youtube.com/watch?v=4OX49nLNPEE&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=21)  
* a = int(input('Enter a number: ')
* a = int(sys.argv[1])
## 12 [for else](https://www.youtube.com/watch?v=38svC3U7hVo&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=28)
* [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test1-forelse.py)
## 13 [Matrix](https://www.youtube.com/watch?v=Blzp9iuhZqo&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=35)
## 14 [Function](https://www.youtube.com/watch?v=eci9iU_s6Ag&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=38)
* position
* keyword
* default
* variable length arguments(*arg)
* [keyworded variable length arguments(**kwarg)](https://www.youtube.com/watch?v=kB829ciAXo4&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=39)
## 15 [Scopes](https://www.youtube.com/watch?v=QYUbLevwgDQ&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=40)
* a
  * global a
  * globals()['a']
  * nonlocal a
* [LEGB: Local, Enclosing, Global, Built-in](https://www.youtube.com/watch?v=QVdf0LgmICw&list=PL-osiE80TeTt2d9bfVyTiXJA-UTHn6WwU&index=18&pbjreload=101)
## 16 [lambda](https://www.youtube.com/watch?v=hYzwCsKGRrg&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=46)
* f=lambda a,b:a+b
* [filter](https://www.youtube.com/watch?v=kj850Y8y8FI&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=47)
* map
* reduce
* [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test3-lambda.py)
## 17 [decorator](https://www.youtube.com/watch?v=yNzxXZfkLUA&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=48)
* [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test4-decorator.py)
## 18 [--name--](https://www.youtube.com/watch?v=7hjgRn-vfVQ&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=51)
## 19 [Class and Object](https://www.youtube.com/watch?v=8O5kX73OkIY&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=53)
* Attributes/Methods
* Special methods
  * [--init--](https://www.youtube.com/watch?v=WIP3-woodlU&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=54)
* [Types of variables](https://www.youtube.com/watch?v=RSQjxL5WRNM&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=56)
  * instance variables
  * class/static variables
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test5-class.py)
* [Types of methods](https://www.youtube.com/watch?v=lVfGQOzzRCM&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=57)
  * instance methods: (self)
  * class methods: @classmethod (cls)
  * static methods: @staticmethod ()
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test6-class-methods.py)
* [Inner class](https://www.youtube.com/watch?v=b7JzgybKvys&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=58)
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test7-inner-class.py)
* [Inheritance](https://www.youtube.com/watch?v=Cn7AkDb4pIU&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=59)
  * single level
  * multi level
  * [multiple: super(), Method Resolution Order(MRO) C(A,B)](https://www.youtube.com/watch?v=6P-P879BcHQ&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=60)
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test8-inheritance.py)
* [Polymorphism]()
  * [Duck Typing](https://www.youtube.com/watch?v=CuK0g8OFzwo&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=62)
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test9-polymorphism-duck-typing.py)
  * [Operator Overloading](https://www.youtube.com/watch?v=9wd50TKv_OQ&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=63)
    * [source code](https://github.com/davidzheng66/notes/commit/ab15c6ad13911c2310ea5c81ec64668e9ce9cbfd)
  * [Method Overloading and Method Overriding](https://www.youtube.com/watch?v=CcTzTuIsoFk&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=64)
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test11-polymorphism-method-overloading-overriding.py)
* [Abstract Class and Method](https://www.youtube.com/watch?v=UDmJGvM-OUw&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=65)
  * from abc import ABC, abstractmethod 
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test12-abstract-class-method.py)
## 20 [Iterator](https://www.youtube.com/watch?v=Dyu08G2l71c&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=66)
  * it = iter(nums) => it.--next--(), or next(it)
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test13-iterator.py)
## 21 [Generator](https://www.youtube.com/watch?v=mziIj4M_uwk&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=67)
  * yield
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test14-generator.py)
## 22 [Error Handling](https://www.youtube.com/watch?v=6SPDvPK38tw&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=68)
  * Compile time error: syntax error
  * Logic error: wrong error
  * Run time error: divided by zero
  * try: except Exception as e:
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test15-exception.py)
## 23 [Multi-threading](https://www.youtube.com/watch?v=GqHLztqy0PU&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=69)
  * from threading import Thread
  * t1.start(), t1.join()
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test16-multi-threading.py)
## 24 [File Handling](https://www.youtube.com/watch?v=aequTxAvQq4&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=70)
  * open(), read(), readline(), write(), rwb
  * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test17-file-handling.py)
## 25 [Python](https://www.youtube.com/watch?v=0BhSWyDEDC4&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=72)
  * Compiled and interpreted language
  * source code -> compiler -> byte code -> interpreter(Python Virtual Machine) -> Machine language
  * [Implementation](https://en.wikipedia.org/wiki/Python_%28programming_language%29#Implementations)
    * CPython(C)
    * PyPy
    * Jython(Java)
    * IronPython(.net)
## 26 Search
  * [Linear Search on sorted list](https://www.youtube.com/watch?v=UldZOLylez4&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=73)
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test18-linear-search.py)
  * [Binary Search on sorted list](https://www.youtube.com/watch?v=DE-ye0t0oxE&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=74)
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test18-binary-search.py)
## 27 Sort
  * [Bubble Sort](https://www.youtube.com/watch?v=Vca808JTbI8&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=75)
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test19-bubble-sort.py)
  * [Selection Sort](https://www.youtube.com/watch?v=5KjapFQNxUo&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=76)
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test19-selection-sort.py)
## 27 Database Connection
  * [Install MySQL](https://www.youtube.com/watch?v=WDEyt2VHpj4&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=77)
    * [MySQL Installer](https://dev.mysql.com/downloads/installer/)
  * [Connect Python to MySQL](https://www.youtube.com/watch?v=vR5utJvN4JY&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=78)
    * pip install mysql.connect 
    * import mysql.connector
    * [source code](https://github.com/davidzheng66/notes/blob/master/Python/code/test20-database-connection.py)
## 28 [Github](https://github.com/)
  * [Part 1](https://www.youtube.com/watch?v=UBLONzkmReE&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=79)
  * [Part 2](https://www.youtube.com/watch?v=udO6gSLXujU&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=80)
## 29 [Socket](https://www.youtube.com/watch?v=u4kr7EFxAKk&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=82)
  * [Server code](https://github.com/davidzheng66/notes/blob/master/Python/code/test21-server.py)
  * [Client code](https://github.com/davidzheng66/notes/blob/master/Python/code/test21-client.py)
## 30 [Python WiFi Scanner:David Bombal](https://www.youtube.com/watch?v=DFTwB2nAexs)
 * [source code](https://github.com/davidbombal/red-python-scripts/blob/main/lanscan_arp.py)
 * [videos](https://www.youtube.com/c/DavidBombal/videos)
## 31 [Python nmap port scanner:David Bombal](https://www.youtube.com/watch?v=x4AE5yOF9pE)
* Scripts using regex:
  * [Socket method](https://github.com/davidbombal/red-python-scripts/blob/main/port_scanner_regex.py)
  * [nmap method](https://github.com/davidbombal/red-python-scripts/blob/main/nmap_port_scanner.py)
* Scripts using IP address:
  * [Socket method]( https://github.com/davidbombal/red-python-scripts/blob/main/port_scanner_ip_obj.py)
  * [nmap method](https://github.com/davidbombal/red-python-scripts/blob/main/nmap_port_scanner_ip_obj.py)
## 32 [I own your wifi](https://www.youtube.com/watch?v=EGlq6J1E7no)

