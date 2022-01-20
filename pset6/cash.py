import importlib

def main():
    # prompt user for change owed
    dollar = get_dollar()
    # converting the user’s inputted dollars to cents
    cents = round(int(dollar * 100))
    coins = calculate_coins()
    print("")


def get_dollar():
    while True:
        try:
            n = get_float("change owed: ")
            if n > 0
                break
        except ValueError:
            print("Enter a valid value")
     return n


main()


