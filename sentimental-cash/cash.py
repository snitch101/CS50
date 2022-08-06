from cs50 import get_float

def main():

    #Ask user for a decimal float number
    while True:
        change = get_float("Change: ")
        if change and change > 0:
            break

    cents = calculate_cents(change)

    quaters = calculate_quaters(cents)
    cents = cents - quaters * 25

    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10

    nickels = calculate_nickels(cents)
    cents = cents - nickels * 5

    pennies = calculate_pennies(cents)
    cents = cents - pennies * 1

    coins = quaters + dimes + nickels + pennies

    print(coins)



def calculate_cents(change):

    #change all dollats to cents
    cents = round(change * 100)
    return cents

def calculate_quaters(cents):

    #calculate quaters
    quaters = cents / 25
    return int(quaters)

def calculate_dimes(cents):

    dimes = cents / 10
    return int(dimes)

def calculate_nickels(cents):

    nickels = cents / 5
    return int(nickels)

def calculate_pennies(cents):

    pennies = cents / 1
    return int(pennies)

if __name__ == "__main__":
    main()