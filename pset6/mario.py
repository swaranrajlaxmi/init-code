import importlib


def main():
    height = get_height()
    
    # printing hash as like both right and left alighned pyramid


def get_height():
    # prompt the user for height untill the given condition is met
    while True:
        try:
            n = int(input("Height: "))
            if n > 0 and n <= 8:
                break
            print("Invalid")
        except ValueError:
            print("That's not an integer")
    return n


main()