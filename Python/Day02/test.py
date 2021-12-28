x = 'Ahmed'
for letter in x:
    # end is whenever command is done, sep is done between args as delimiter
    print(letter.upper(), letter.lower(), sep=' ', end='\n')


for i in range(0, 4):
    print('*' * i)

for i in range(0,11):
    # if doesn't divide evenly
    if i%2 != 0:
        continue
    if i==10:
        break
    print(i)

def printHello(name = ''):
    print(f'Hello {name}')

printHello()
printHello('Ahmed')
# global y, initializes y (implicitly)
#y = 'Hello World'
def test():
    # have to use global in a line, then change it in another line
    global y
    y = 'not Ahmed'

test()
print(y)


import lib2
print(lib2.Sum(1,2))
lib2.Print()

from lib2 import Sum
print(Sum(1,2))

z = int()
print(z)
z = str()
print(z)


arr = list([5,2,'hello'])
print(arr)
print(arr[:0])

# comprehension
list_x = [i for i in range(0,11)]
generator_x = (i for i in range(0,11))
dict_x = {i:i*i for i in range(0,11)}

print(list_x)
print(generator_x)
print(dict_x)


print(list_x.pop())
list_from_tuple = list(generator_x)
print(list_from_tuple)


names_list = ['Ahmed', 'ali', 'Mohamed', 'Hassan', 'Hassan', 'Mohamed', '1']
# if you want to remove duplicates, use set
# if '1' wasn't string, would have had an error
print(names_list)
names_list.sort()
print(names_list)


list1 = [1,2,3,4,5]
list2 = [6,7,8,9,10]
list_x = list2
list2.extend(list1)
# both are same reference btw, but what if list2 had to reallocate behind the scenes?(assuming it's linkedlist implementation)
print(list2)
print(list_x)


# nested list
nested_list = [[1,2,3],[4,5,6],[7,8,9]]
for row in nested_list:
    print(row)
print("#####")
# 3D nested list
nested_list = [[[1,2,3],[4,5,6],[7,8,9]],[[1,2,3],[4,5,6],[7,8,9]]]
for row in nested_list:
    for col in row:
        print(col)
# 2D nested list
nested_list = [[i*i/j for i in range(1,11)] for j in range(1,11)]
print(nested_list)
for i in nested_list:
    print(i)


