# Reverse Name
Reverse Name is a simple program that takes a user's input of a first and last name, then reverses the order of the name and prints it in the format "last_name, first_initial."

# Usage
When the program is executed, it prompts the user to enter a first and last name. The user then types in the name and presses enter. The program then removes any newline characters from the input and calls the reverse_name() function, passing in the input name as an argument. The reverse_name() function takes the input name, removes any leading spaces before the first name, and separates the first and last names into separate arrays. It then reverses the order of the names and prints the result in the format "last_name, first_initial."

# Functionality
The program uses the fgets() function to get the user's input, the strlen() function to calculate the length of the input name, and the strcspn() function to remove any newline characters from the input. The program also uses several loops to iterate through the input name, check for unexpected characters, and assign the first and last names to separate arrays. Finally, the program uses printf() to print the result in the desired format.

# Author
This program was written by Emre Koca
