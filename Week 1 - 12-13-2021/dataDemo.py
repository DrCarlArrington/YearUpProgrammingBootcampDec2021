# What are some data types that you know in programming?

# primitive data types - can use less than 2 bytes of data

# numerical
    # integers - whole numbers w/ no decimals
    # floats - numbers that can have decimals

# text based
    # char - one character enclosed in single quotes (')

# logic based
    # bool - hold either a true or false
    # model bit logic - 0 or 1 - binary digits

# non primitive data types - can use as much space as possible
    # strings - one or more characters enclosed in double quotes (")
    
# to declare a variable in another language, use datatype followed by the name of the variable

# values that are modeled in literals
#print(15) # integer literal
#print(15.5555) # float literal
#print('A') # char literal
#print(True) # boolean literal
#print("Today is Monday") # string literal

# we can store values into variables as well
# a variable is a named location that is in the memory
# variable names have to be a continuous string of characters that cant contain any spaces
# variable declarations use the assignment operator (=)
# varibale name goes on the left, the value goes on the right
num1 = 15 # declares a variable named num1 and assigns the value of 15 to the variable

"""
    These are multi line comments
    Put as much info as you want
"""

# display the value of the variable
print(num1)
# use a formatted string to display the value of the variable along with other text
print(f"num1 = {num1}")
# use type conversions to display the value of the variable along with other text
print("num1 = " + str(num1))


#print(15.5555) # float literal
num2 = 15.5555 # declare a variable named num2 and assign the value of 15.5555 to the variable
print(num2)
# use a formatted string to display the value of the variable along with other text
print(f"num2 = {num2}")
# use type conversions to display the value of the variable along with other text
print("num2 = " + str(num2))

# use a formatted string to format the decimal number to show 2 decimal places
print(f"formatted num2 = {num2:.2f}")


num3 = 15555.5555 # declare a variable named num3 and assign the value of 15555.5555 to the variable
# use a formatted string to format the decimal number to show 2 decimal places and a comma for the thousands
print(f"formatted num3 = {num3:.3f}")


char1 = 'A' # declare a variable named char1 and assign the value of uppercase A
print(char1)
print(f"char1 = {char1}")
print("char1 = " + char1)
