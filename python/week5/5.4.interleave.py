def interleave(*lists):
    """
    Takes one or more lists as input and returns a new list with the interwoven members of all input lists.
    """
    max_length = max(len(lst) for lst in lists)
    for i in range(max_length):
        for lst in lists:
            if i < len(lst):
                yield lst[i]


if __name__ == '__main__':
    result = []
    for i in interleave('abc', [1, 2, 3, 4], ('!', '@', '#')):
        result.append(i)
    print(result)
