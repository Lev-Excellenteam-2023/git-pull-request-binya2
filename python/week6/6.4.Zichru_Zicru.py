from PIL import Image




def image_decoding(image_path):
    """
    This function gets a path to an image file and returns a string.
    """
    text = ''
    with Image.open(image_path).convert('RGB') as image:
        for x in range(image.width):
            for y in range(image.height):
                if image.getpixel((x, y)) == (1, 1, 1):
                    text += chr(y)
    return text


if __name__ == '__main__':
    image_path = input("Enter image path: ")
    print(image_decoding(image_path))
