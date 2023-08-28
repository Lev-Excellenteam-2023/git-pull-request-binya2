import datetime
import random
"""
    # Generates a new date that is between the two given dates from the user.
    :param first_date:start date
    :param second_date: finish date
    :return: a random date between the two given dates
    """


def get_date(first_date, second_date):
    # from string to datetime
    from_date = datetime.datetime.strptime(first_date, '%Y-%m-%d')
    to_date = datetime.datetime.strptime(second_date, '%Y-%m-%d')
    # random a date between the two given dates
    date_range = to_date - from_date
    day_type = random.randint(0, date_range.days)
    random_day = from_date + datetime.timedelta(days=day_type)
    return random_day


if __name__ == '__main__':

    Initial_date = input("Please Enter from date (YYYY-MM-DD): ")
    Secondary_date = input("Please Enter to date (YYYY-MM-DD): ")
    day = get_date(Initial_date, Secondary_date)
    print("The random date is", day.strftime('%Y-%m-%d'))
    if day.weekday() == 0:
        print("I don't have vinaigrette!")
