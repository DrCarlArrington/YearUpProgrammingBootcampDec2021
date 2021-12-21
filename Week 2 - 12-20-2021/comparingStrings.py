day = input("Enter the day of the week: ")
day = day.lower() # converts the text entered to all lowercase letters

# check to see what day of the week you entered
if day == "monday":
    print("Its the first weekday of the week")
elif day == "tuesday":
    print("Its the second weekday of the week")
elif day == "wednesday":
    print("Its the third weekday of the week")
elif day == "thursday":
    print("Its the fourth weekday of the week")
elif day == "friday":
    print("Its the last weekday of the week! TGIF")
elif day == "saturday" or day == "sunday":
    print("Its the WEEKEND")
else:
    print("You entered an invalid day")