# have the user input their name
name = input("What is your name? ")
# have the user input their hourly wage at their job
wage = input("What is the hourly wage? ")

# calculate how much the user makes per day if the user works 8 hours
dailyWage = float(wage) * 8

# display the user's name, hourly wage, and daily wage
print("Hello, " + name)
print(f"You make ${float(wage):.2f} per hour")
print(f"You make ${dailyWage:.2f} per day")