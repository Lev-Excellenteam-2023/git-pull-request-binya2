from collections import defaultdict


def group_by(func, iterable):
    """
    This function gets a function and an iterable and returns a dictionary with the function as the key and the
    """
    res_dict = defaultdict(list)
    for item in iterable:
        res_dict[func(item)].append(item)
    return res_dict


if __name__ == '__main__':
    print("The output is:")
    dictionary = group_by(len, ["hi", "bye", "yo", "try"])
    for key, value in dictionary.items():
        print(str(key) + ': ' + str(value))
