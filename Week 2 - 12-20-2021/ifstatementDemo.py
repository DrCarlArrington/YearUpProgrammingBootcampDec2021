# single alternative decision structure - if statement
"""
    structure of an if statement:
    
        if condition:
            statement(s)
            
    statements will execute only if the condition is true
    
    conditions are built using boolean expressions
    built using relational operators:
    
        > - greater than
        < - less than
        >= - greater than or equal to
        <= - less than or equal to
        == - is equal to (don't confuse with = )
        ! - logical not (flips the value of a boolean expression)
        != - is not equal to
        and - logical and (inclusive) - both parts have to be true for the expression to be true
        or - logical or (optional) - one part has to be true for the expression to be true
"""



"""
    +: addition
    -: subtraction
    *: multiplication
    /: division (calculates quotients)
    %: modular division (calculates remainders) - can only be used with integers



print(4 / 2) - displays 2.0
print(5 / 1) - displays 5.0
print(5 / 2) - displays 2.5

print(4 % 2) - prints a remainder of 0
print(5 % 1) - prints a remainder of 0
print(5 % 2) - prints a remainder of 1

"""

# ask the user to enter a number
number = int(input("Enter a number: "))

# if statement that displays a message if the number is even
# a number is even if num % 2 = 0 
if number % 2 == 0:
    # only executes if the number is even
    print(f"{number} is an even number!")
    
# regardless, print out the number
print(f"You entered the number {number}")
