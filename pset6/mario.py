# a program that prints out a half-pyramid of a specified height

import importlib



def main():
    height = get_height()
    for i in range(height):
        


def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n<0 or n>8
            break
        except ValueError:
            print("That's not an integer!")
     return n

main()
