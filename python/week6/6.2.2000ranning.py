import time
""""
    This function calculate the run time of the argument function.
    :param f: The function.
    :param args1: this is the parameters of the function if they are given by position
    :param args2: this is the parameters of the function if they are given by name
    :return: the execution time of the function
    """


def timer(f, *args, **kwargs):
    start_time = time.time()
    f(*args, **kwargs)
    return time.time() - start_time


if __name__ == '__main__':
    print(timer(print, "Hello"))
    print(timer(zip, [1, 2, 3], [4, 5, 6]))
    print(timer("Hi {name}".format, name="Bug"))
