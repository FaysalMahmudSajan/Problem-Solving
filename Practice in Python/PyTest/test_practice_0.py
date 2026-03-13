from practice_0 import *
import pytest

def test_get_weather():
    assert get_weather(10)=='cold'
    assert get_weather(19)=='cold'
    assert get_weather(100)=='hot'
    assert get_weather(100)=='hot'


def test_add():
    assert add(1,5) == 6
    assert add(5,6) > 10

def test_sub():
    assert sub(4,5) ==-1
    assert sub(1,1) == 0

def test_mul():
    assert mul(2,3) == 2*3
    assert mul(0,5) == 0

def test_div():
    assert div(0,1) == 0

def test_divide():
    with pytest.raises(ValueError,match='Cannot divide by zero'):
        divide(1,1)
    
