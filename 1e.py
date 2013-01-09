"""
create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:
your name is (blank), you are (blank) years old, and your username is (blank)
for extra credit, have the program log this information in a file to be accessed later.
"""

import sys

name            =   raw_input('please enter your name: ')
age             =   raw_input('please enter your age: ')
username        =   raw_input('please enter your username: ')

print 'your name is ' + name + ', you are ' + age + ' years old, and your username is ' + username


raw_input('press enter to exit the program')

sys.exit()
