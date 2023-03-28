from PIL import Image

"""
   The function extracts the encrypted content.
   :param user_path: Image's path.
   :return: The message that was encrypted
   """


def image_decoding(path):
    text = ''
    with Image.open(path).convert('RGB') as image:
        for x in range(image.width):
            for y in range(image.height):
                if image.getpixel((x, y)) == (1, 1, 1):
                    text += chr(y)
    return text


if __name__ == '__main__':
    image_path = input("Enter image path: ")
    print(image_decoding(image_path))
