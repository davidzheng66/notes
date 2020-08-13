def div(a,b):
    print(a/b)

def smart_div(func):
    def inner1(a,b):
        if(a < b):
            a, b = b, a
        return func(a,b)
    return inner1

div1 = smart_div(div)

div(4,2)
div1(2,4)
div1(4,2)
