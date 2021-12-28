tuple_x = (1, 2, 5 , 0, True)
print(tuple_x)
print(tuple_x.count(True))  # 2
print(tuple_x.count(0))     # 1
print(tuple_x.count(2))     # 1

# only 1 & true Evluated to True here
for x in tuple_x:
    if x==True:
        print(x)


set_x = {1, 2, 5, 0, True}
print(set_x)
print(set_x.count(True))  # 2
