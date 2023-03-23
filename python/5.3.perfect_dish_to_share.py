def is_perfect_number(n):
    """
    Returns True if n is a perfect number, the sum of the proper divisors of n is equal to n.
    """
    divisors = [i for i in range(1, n) if n % i == 0 and i != n]
    return sum(divisors) == n


if __name__ == '__main__':
    num = input("Please enter a maximum number to check:")
    for i in range(int(num)):
        if is_perfect_number(i):
            print(i)
