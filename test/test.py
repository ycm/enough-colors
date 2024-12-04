import math

def main():
    greet("Alice", 3)

    circle = Circle(5.0)
    print(circle)
    print(f"Area: {circle.area():.2f}")

    squares = [x ** 2 for x in range(10)]
    print(f"Squares: {squares}")

    try:
        invalid = 10 / 0
    except ZeroDivisionError as e:
        print(f"Caught an exception: {e}")
    finally:
        print("Done with error handling.")

def main():
    greet("Alice", 3)

    circle = Circle(5.0)
    print(circle)
    print(f"Area: {circle.area():.2f}")

    squares = [x ** 2 for x in range(10)]
    print(f"Squares: {squares}")

    try:
        invalid = 10 / 0
    except ZeroDivisionError as e:
        print(f"Caught an exception: {e}")
    finally:
        print("Done with error handling.")
if __name__ == "__main__":
    main()
