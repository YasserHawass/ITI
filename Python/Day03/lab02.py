'''
/*******************************************************************************
/*  AUTHORS:         Your Name                                                  *
/*  DATE:            December 27, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:    This program that generates an init func for DDRA register  *
/*                  in atmega32 MC, system will ask user to enter the mode for  *
                    each pin                                                    *
/*******************************************************************************
'''

File = open("init.c","w+")
File.write("void Init_PORTA_DIR (void)\n{\n")
i = 1
DDRA = ''
while i <= 8:
	while 1:
		Value = input("Please enter Bit " + str(i) + ' mode: ')
		Value = Value.lower()
		if Value == 'input':
			DDRA = '0'+DDRA
			break
		elif Value == 'output':
			DDRA = '1'+DDRA
			break
		else:
			print("Wrong Option, please try again later")
	
	i += 1

DDRA = '0b' + DDRA
File.write("	DDRA = " + DDRA)
File.write(";\n}")
File.close()

File.close()