'''
/*******************************************************************************
/*  AUTHORS:         Your Name                                                  *
/*  DATE:            December 27, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:     This program tests lists methods                           *
/*******************************************************************************
'''

lista = ['one', 'two', 95, 1, 7.54, 3.14, 'four', 'five', 'six', 'seven', 'eight', 'nine']

print(lista)
print(f"Length is {len(lista)}")
print("---------------------------------------------------")
print(f"type is {type(lista)}")
print("---------------------------------------------------")
print(f"Element of index 1 is {lista[1]}")
print(f"Element of index -1 is {lista[-1]}")
print("---------------------------------------------------")
print(f"Silcing from 1:4 is {lista[1:4]}")
print("---------------------------------------------------")
print("edit element of index 1")
print(lista)
lista[1] = '!two'
print(lista)
print("---------------------------------------------------")
print("append ibrahim and 25")
print(lista)
lista.append('ibrahim')
lista.append(25)
print(lista)
print("---------------------------------------------------")
print("remove a string")
print(lista)
lista.remove('ibrahim')
print(lista)
print("---------------------------------------------------")
print("reverse")
print(lista[::-1])
#print(lista.sort())
print(lista.reverse())
print("---------------------------------------------------")
print("clear")
lista.clear()
print(lista)
print("---------------------------------------------------")
