"""
    multiple alternative decision structures are if / else if statements
    
     structure:
    
        if condition:
            statement(s)
        elif condition:
            statement(s)
            
            (can have as many else ifs between an if and an else)
            
        else:
            statement(s)
            
    NO NEED TO PUT A CONDITION AFTER THE WORD ELSE
    (python understands that else is where the if is FALSE)
    
"""
# have the user input a number
a = int(input("Enter a number: "))
# have the user input another number
b = int(input("Enter another number: "))

# use an if / else if to tell the relationship between the numbers
if a > b:
    # first number is greater than the second
    print(f"{a} is greater than {b}")
elif b > a:
    # second number is greater than the first
    print(f"{b} is greater than {a}")
else:
    # both numbers are equal
    print(f"{a} is equal to {b}")
    