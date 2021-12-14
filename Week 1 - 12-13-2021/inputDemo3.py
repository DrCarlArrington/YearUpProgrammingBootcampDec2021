# All input in Python is string based
# use the input function to get user input
# the result is stored into a variable
name = input("What is your name? ")

age = input(f"How old are you, {name}? ")

# calculate age in 5 years - age has to be converted from
# a string to an integer to calculate
fiveYears = int(age) + 5

# output the value of the input
print("Hello, " + name)
print(f"You are {age} years old.")
print(f"In five years you will be {fiveYears} years old.")
