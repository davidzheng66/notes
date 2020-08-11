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
## 13 [matrix](https://www.youtube.com/watch?v=Blzp9iuhZqo&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=35)
## 14 [function](https://www.youtube.com/watch?v=eci9iU_s6Ag&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=38)
* position
* keyword
* default
* variable length
