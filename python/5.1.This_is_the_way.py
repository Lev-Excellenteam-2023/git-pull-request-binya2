import os
"""
     Gets the folder path from the user, when a file starts with the word "deep" returns it.
    :param user_path: the folder path that is given from the user
    :return: all files that start with the word "deep" into a list
    """


def files_startswith_deep(path):
    files_list = os.listdir(path)
    deep_files = []
    for files in files_list:
        if files.startswith("deep"):
            deep_files.append(files)
    return deep_files


if __name__ == '__main__':
    path_dir = input("Enter a path file: ")
    deep_file = files_startswith_deep(path_dir)
    for file in deep_file:
        print(file)
