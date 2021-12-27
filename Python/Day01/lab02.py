# binary to decimal
# input_binary = int(input("Enter a binary number: "),2)
# print(f"{input_binary:b} in decimal is {input_binary:d}")


# another method is
input_binary = input("Enter a binary number of 3 digits: ")
if (len(input_binary) == 3  ):
    print("Invalid input")
else:
    print(f"{(input_binary[-1]).count('1')*1 + (input_binary[-2]).count('1')*2 + (input_binary[-3]).count('1')*4}")