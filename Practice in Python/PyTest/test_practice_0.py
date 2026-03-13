from practice_0 import *
import pytest


def test_get_weather():
    assert get_weather(10) == "cold"
    assert get_weather(19) == "cold"
    assert get_weather(100) == "hot"
    assert get_weather(100) == "hot"


def test_add():
    assert add(1, 5) == 6
    assert add(5, 6) > 10


def test_sub():
    assert sub(4, 5) == -1
    assert sub(1, 1) == 0


def test_mul():
    assert mul(2, 3) == 2 * 3
    assert mul(0, 5) == 0


def test_div():
    assert div(0, 1) == 0


def test_divide():
    with pytest.raises(ValueError, match="Can't divide by zero"):
        divide(1, 0)


@pytest.fixture
def user_management():
    return UserManager()


def test_none_exist_user(user_management):
    assert user_management.add_user("faysal", "faysal@example.com") == True
    assert user_management.get_user("faysal")=='faysal@example.com'

def test_add_duplicate_user(user_management):
    assert user_management.add_user("faysal", "faysal@example.com")
    with pytest.raises(ValueError):
        user_management.add_user("faysal", "faysal@example.com")


@pytest.fixture

def db():
    database = Database()
    yield database
    database.data.clear()

def test_add_user_db(db):
    db.add_user(1,'Alice')
    assert db.get_user(1)=='Alice'

def test_add_duplicate_user_db(db):
    db.add_user(1,'Alice')
    with pytest.raises(ValueError, match='User already exists'):
        db.add_user(1,'Alice')

def test_delete_user(db):
    db.add_user(2,'Faysal')
    db.delete_user(2)
    assert db.get_user(2) is None