users = {'ali':'123', 'omar':'456', 'ahmed':'789'}
name = input("What is your name? ").strip().lower()
if (name == 'ali' or name == 'ahmed' or name == 'omar'):
    password = input("What is your password? ")
    if(users.get(name) == password):
        print(f"Howdy's {name} !")
    else:
        print("invalid password")
else:
    print("invalid name")



# also could be done
# if name in users and password == users[name]:
#     print("Logged in")
# else:
#     print("bad username / password")


# or just go with multiple nested if's for each specific user to check if their password is correct
# maybe also do a switch case





# there's also a bonus assignment
# how to count 'ehm' in a string if it's not in a word
sentence = "ehm I am a sentence notehm with ehm in it ehm"
# s_count = sentence.startswith('ehm ')if 1 else 0
# e_count = sentence.endswith(' ehm')if 1 else 0
# count = sentence.count(' ehm ')
# print( count + s_count + e_count)

# or actually a clever idea done by zahra hisham, she added space to the start and end of the string
# and then counted.
print((" "+sentence+" ").count(' ehm ') )