from practice import get_weather

def test():
    assert get_weather(10)=='cold'
    assert get_weather(19)=='cold'
    assert get_weather(100)=='hot'
    assert get_weather(100)=='hot'
