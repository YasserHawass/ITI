'''
/*******************************************************************************
/*  AUTHORS:         Your Name                                                  *
/*  DATE:            December 27, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:     This program checks username if it's correct               *
/*                   continue and ask for password if it's correct finish       *
/*                   you have three trials accumatively                         *   
/*******************************************************************************
'''
try_no = 0
users = {'Ahmed':'1394', 'Ali':'6078', 'Amr':'9345'}
# check only password 3 times
# name = input("What is your name? ").strip()
# if (name == 'Ahmed' or name == 'Ali' or name == 'Amr'):
#     for try_no in range(0,3):
#         password = input("What is your password? ")
#         if(users.get(name) == password):
#             print(f"Howdy's {name} !")
#             break
#         else:
#             print("invalid password")
# else:
#     print("invalid name")

# checks username and password accumatively 3 times
while (try_no < 3):
    name = input("What is your name? ").strip()
    if (name == 'Ahmed' or name == 'Ali' or name == 'Amr'):
        while (try_no < 3):
            password = input("What is your password? ")
            if(users.get(name) == password):
                print(f"Howdy's {name} !")
                try_no = 3
            else:
                print("invalid password")
                try_no += 1
    else:
        print("invalid name")
        try_no += 1


# testing flags - warning
# for x in range(0,3):
#     name = input("What is your name? ").strip()
#     if name in users:
#         for y in range(0,3):
#             password = input("What is your password? ")
#             if password == users[name]:
#                 print(f"Howdy's {name} !")
#                 z = 1
#                 break
#             else:
#                 print("Wrong password")
#     elif z:
#         break
#     else:
#         print("You are not registered")




