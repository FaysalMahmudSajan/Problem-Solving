def get_weather(temp):
    if temp > 20:
        return "hot"
    else:
        return "cold"


def add(a, b):
    return a + b


def sub(a, b):
    return a - b


def mul(a, b):
    return a * b


def div(a, b):
    return a / b


def divide(a, b):
    if b == 0:
        raise ValueError("Can't divide by zero")
    return a / b


class UserManager:

    def __init__(self):
        self.users = {}

    def add_user(self, username, email):
        if username in self.users:
            raise ValueError("User already exits")
        self.users[username] = email
        return True

    def get_user(self, username):
        return self.users.get(username)


class Database:
    """simulates a basic user database"""

    def __init__(self):
        self.data = {}

    def add_user(self, user_id, name):
        if user_id in self.data:
            raise ValueError("User already exists")
        self.data[user_id] = name

        return True

    def delete_user(self, user_id):
        if user_id in self.data:
            del self.data[user_id]

    def get_user(self, user_id):
        return self.data.get(user_id)
