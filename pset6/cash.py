import importlib
from cs50 import get_float

def main():
    # prompt user for change owed
    dollar = user_input()
    # converting the user’s inputted dollars to cents
    cents = round(int(dollar * 100))
    coins = calculate_coins()
    print(coins)


def user_input():
    while True:
        try:
            n = get_float("change owed: ")
            if n > 0:
                break
        except ValueError:
            print("Enter a valid value")
    return n


def calculate_coins():
    count = 0
    while cents > 0:
        while cents >= 25:
            count += 1
            cents -= 25
        while cents >= 10:
            count += 1
            cents -= 10
        while cents >= 5:
            count += 1
            cents -= 5
        while cents >= 1:
            count += 1
            cents -= 1


main()


