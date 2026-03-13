def get_weather(temp):
    if temp>20:
        return 'hot'
    else:
        return 'cold'
    


def add(a,b):
    return a+b

def sub(a,b):
    return a-b

def mul(a,b):
    return a*b

def div(a,b):
    return a/b



def divide(a:int,b):
    if b == 0:
        raise ValueError("Cannot divide by zero")
    return a/b