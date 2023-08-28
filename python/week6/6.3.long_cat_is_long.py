def count_words(text):
    """
    This function gets a text and returns a string with the words and their lengths.
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
