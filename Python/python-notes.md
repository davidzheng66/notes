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
## 5. Set path and help. [video](https://www.youtube.com/watch?v=4V14G5_CNGg&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=9) 
* path 
   * C:\python37
   * C:\ptyhon37\Scripts
* PYTHONPATH: C:\python37
* help:
   * help() --> topics() --> LISTS
   * help('LISTS')
## 6. Variables. [video](https://www.youtube.com/watch?v=_OZIAHg5i7M&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=11)
* id(num) or id(10): to get the address of object num
* type(num) or type(10): to get the type of object num
## 7. Data Types. [video](https://www.youtube.com/watch?v=gCCVsvgR2KU&list=PLsyeobzWxl7poL9JTVyndKe62ieoN-MZ3&index=12)
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
* dictionary (map)
  * data = {'aaa':'python', 'bbb':'java', 'ccc':'javascript'}
  * data['aaa'] --> 'python'
  * data.get('aaa') -- > 'python'
  * data.keys() --> dict_keys(['aaa', 'bbb', 'ccc'])
  * data.values() --> dict_values(['python', 'java', 'javascript'])
