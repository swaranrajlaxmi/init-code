import importlib


def main():
    height = get_height()
    # printing hash as like both right and left alighned pyramid
    for i in range(height):
        width = ((2 * height) + 2)
        for j in range(width):
            if j < (width/2) - (i + 1):
                print(" ", end="")
            else:
                print("#", end="")
        print()


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