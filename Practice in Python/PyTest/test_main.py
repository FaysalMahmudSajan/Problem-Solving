from main import divide

def test_divide():
    assert divide(1,2) == 0.5
    assert divide(1,0) == ValueError

def test_divide_by_zero():
    with pytest.raises(ValueError):
        divide(1,0)