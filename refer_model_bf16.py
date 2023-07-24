import numpy as np
from bfloat16 import bfloat16

import math

# Function to add two numbers
def add(a, b):
    return a + b

# Function to subtract two numbers
def subtract(a, b):
    return a - b

# Function to multiply two numbers
def multiply(a, b):
    return a * b

# Function to divide two numbers
def divide(a, b):
    if b != 0:
        return a / b
    else:
        return "Error: Division by zero"

# Function to calculate the square root of a number
def square_root(a):
    if a >= 0:
        return math.sqrt(a)
    else:
        return "Error: Invalid input"

# Get input from the user
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
num1 = bfloat16(num1)
num2 = bfloat16(num2)
print('%.10f' % num1)
print('%.10f' % num2)
# Perform operations
result_add = add(num1, num2)
print(type(result_add))
result_subtract = subtract(num1, num2)
result_multiply = multiply(num1, num2)
result_divide = divide(num1, num2)
result_sqrt_num1 = square_root(num1)
result_sqrt_num2 = square_root(num2)
result_sqrt_num1 = bfloat16(result_sqrt_num1)
print(type(result_sqrt_num1))

# Display the results
print('Addition: %.20f' % result_add)
print("Subtraction: %.20f" % result_subtract)
print("Multiplication: %.20f" % result_multiply)
print("Division: %.20f" % result_divide)
print("Square root of number 1: %.20f" % result_sqrt_num1)
print("Square root of number 2: %.20f" % result_sqrt_num2)

if(float('nan') == float('nan')):
    print("True")
else:
    print("false")
#import tensorflow as tf




