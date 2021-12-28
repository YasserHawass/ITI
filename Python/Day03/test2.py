
# filehandler = open('test.txt', 'r')
# print(filehandler.read())                     # error if file is not found
# filehandler.close()

# filehandler = open('test.txt', 'r+')
# print(filehandler.read())                     # error if file is not found
# filehandler.close()

filehandler = open('test.txt', 'w')
filehandler.write('Hello World')              # create file and writes a string
filehandler.close()


# filehandler = open('test.txt', 'a')
# filehandler.write('\nHello World')              # append to file
# filehandler.close()
