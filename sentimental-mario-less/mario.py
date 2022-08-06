
def main():

    while True:
    #try to ask for a height until an integer is returned
        try:
            height = int(input("Height: "))
            if height > 0:
                break

        except:
            print("That is not an integer")

    for i in range(height):
        hash = i + 1
        space = height - hash
        print(" " * space, end="")
        print("#" * hash, end="")
        print()

if __name__ == "__main__":
    main()