'''
/*******************************************************************************
/*  AUTHORS:         Yasser                                                     *
/*  DATE:            December 27, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:     This program is provides bit mathmmatical operators        *
/*                   to manipulate bits in a number                             *
/*******************************************************************************
'''

def SET_BIT(value, bit):
    return value | (1 << bit)
# remeber if you wanna print binary to use :b, and a modifier to print rest of length
# in case 1001 and toggled last 1, into 0001 instead of only 1
number = int(input("Write your number: "))
#print(f"{SET_BIT(number, 2)}")
# if wanted to print binary while specifiying the desired length
#print(f"{SET_BIT(number, 2):5b}")

def CLR_BIT(value, bit):
    return value & ~(1 << bit)

#print(f"{CLR_BIT(number, 1)}")

def TOG_BIT(value, bit):
    return value ^ (1 << bit)

#print(f"{TOG_BIT(number, 1)}")

def GET_BIT(value, bit):
    return (value >> bit) & 1

# print(f"{GET_BIT(number, 1)}")