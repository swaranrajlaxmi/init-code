# a program that prints out a half-pyramid of a specified height

import importlib

def main():
    height = get_height()
    for i in range(height):
        print(" ")
        for j in range(height):
            if j<(height-(i+1)):
                print(" ", end="")
            else:
                print("#", end="")


def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n>0 and n<8:
                break
        except ValueError:
            print("That's not an integer!")
    return n

main()
