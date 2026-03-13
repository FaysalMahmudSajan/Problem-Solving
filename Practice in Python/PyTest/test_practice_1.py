from practice_1 import add, sub, mul, div

def test_add():
    assert add(1,2) == 3

def test_sub():
    assert sub(1,2) == -1

def test_mul():
    assert mul(1,2) == 2

def test_div():
    assert div(1,2) == 0.5  