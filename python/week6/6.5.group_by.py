from collections import defaultdict


def group_by(f, iterable):
    """
    This function groups the elements in the iterable by the result of applying the function f to each element.
    :param f: A function that takes an element of the iterable as its argument and returns a key to group by.
    :param iterable: An iterable of elements to group.
    :return: A dictionary mapping keys to lists of elements that have the same key.
    """
    res_dict = defaultdict(list)
    for item in iterable:
        res_dict[f(item)].append(item)
    return res_dict


if __name__ == '__main__':
    print("The output is:")
    dictionary = group_by(len, ["hi", "bye", "yo", "try"])
    for key, value in dictionary.items():
        print(str(key) + ': ' + str(value))
