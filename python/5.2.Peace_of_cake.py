def get_recipe_price(prices, optionals=None, **ingredients):
    """
    :param prices: A dictionary of ingredients needed to make a certain recipe.
    :param optionals: A list of components that we will ignore, meaning - we will not buy from them at all.
    :param ingredients: The name of the ingredient and the amount of the ingredient in grams that we would like to buy
    for the recipe.
    :return: Return the final price for buying all ingredients
    """
    if optionals is None:
        optionals = []
    total_price = 0
    for product, cost in ingredients.items():
        if product not in optionals:
            product_price = prices[product]
            price = product_price * (cost / 100)
            total_price += price
    return total_price


if __name__ == '__main__':
    print(int(get_recipe_price({'chocolate': 18, 'milk': 8}, chocolate=200, milk=100)))
    print(int(get_recipe_price({'chocolate': 18, 'milk': 8}, optionals=['milk'], chocolate=300)))
    print(int(get_recipe_price({'chocolate': 18, 'milk': 8}, chocolate=300)))
    print(int(get_recipe_price({})))
