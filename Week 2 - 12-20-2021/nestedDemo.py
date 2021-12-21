"""
    Nested structures
    
    when you have a structure within another structure
    
    if condition:
        if condition:
            statement(s)
        else:
            statement(s)
    else:
        statement(s)
"""

day = int(input("What day of the week is it: 1 - Monday, 2 - Tuesday, 3 - Wednesday, 4 - thursday, 5 - Friday, 6 - Sat, 7 - Sunday: "))
temperature = int(input("What is the temperature outside? "))

if day >= 1 and day <= 5:
    # check to see if the day is a weekday
    # check the temperature
    if temperature >= 70:
        print("its a warm weekday")
    elif temperature > 32:
        print("its a chilly weekday")
    else:
        print("its freezing cold on this weekday")
elif day == 6 or day == 7:
    # check to see if it is the weekend
    if temperature >= 70:
        print("its a warm weekend")
    elif temperature > 32:
        print("its a chilly weekend")
    else:
        print("its freezing cold on this weekend")
else:
    # check for invalid input
    print("You entered an invalid day")