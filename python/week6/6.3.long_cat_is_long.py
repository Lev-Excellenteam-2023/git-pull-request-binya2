def count_words(text):
    """
    Accepts text as a parameter, and returns a dictionary of the word lengths in it.
    :param text: The text.
    :return: A dictionary mapping word lengths to the number of words with that length.
    """
    word_lengths = ""
    clean_text = ''.join(letter for letter in text if letter.isalpha() or letter.isspace()).split()
    for word in clean_text:
        word_lengths += word + ":" + str(len(word)) + ",\n"
    return word_lengths


if __name__ == '__main__':
    dictionary = count_words("""You see, wire telegraph is a kind of a very, very long cat.
                                You pull his tail in New York and his head is meowing in Los Angeles.
                                Do you understand this?
                                And radio operates exactly the same way: you send signals here, they receive them there.
                                The only difference is that there is no cat. """)
    print("\nThe result is:", dictionary)
