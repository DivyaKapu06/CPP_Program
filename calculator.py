
input1 = int(input("Enter num1:"))
input2 = int(input("Enter num2:"))

print("Enter corresponding value displayed for operation:")
print("Add:1\n Substract:2\n Mul:3\n Div:4\n")
value = int(input("Enter value:"))

if(value == 1):
    output = input1 * input2
    print("Addition is" + str(output))
elif(value == 2):
    output = input1 - input2
    print("Substraction is" + str(output))
elif(value == 3):
    output = input1 * input2
    print("Multiply is" + str(output))
elif(value == 4):
    output = input1/input2
    print("Divide is" + str(output))
else:
    print("operation not entered")

