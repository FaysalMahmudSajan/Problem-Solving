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


def is_prime(n):
    if n<2:
        return False
        
    for i in range(2,int(n**0.5)+1):
            
        if n % i == 0:
            return False
    return True


import requests
def get_weather_api():
    response=requests.get("https://api.open-meteo.com/v1/forecast?latitude=23.8103&longitude=90.4125&current_weather=true")
    if response.status_code ==200:
        return response.json()
    else:
        raise ValueError("Could not fetch weather data")