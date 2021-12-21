"""
    dual alternative decision structures are if / else statements:
    
    structure:
    
        if condition:
            statement(s)
        else:
            statement(s)
            
    NO NEED TO PUT A CONDITION AFTER THE WORD ELSE
    (python understands that else is where the if is FALSE)

"""

# ask the user to enter a number
number = int(input("Enter a number: "))

# if / else statement that displays a message if the number is even or if its is odd
# a number is even if num % 2 = 0 
if number % 2 == 0:
    # only executes if the number is even
    print(f"{number} is an even number!")
else:
    # only executes if the number is odd
    print(f"{number} is an odd number!")
    
# regardless, print out the number
print(f"You entered the number {number}")
