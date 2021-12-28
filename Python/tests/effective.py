# Item 7: Use List Comprehensions Instead of map and filter
# Unless you’re applying a single-argument function, list comprehensions are clearer than
# the map built-in function for simple cases. map requires creating a lambda function for
# the computation, which is visually noisy
a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
squares = [x**2 for x in a]
print(squares)
squares = map(lambda x: x ** 2, a)

even_squares = [x**2 for x in a if x % 2 == 0]
print(even_squares)
alt = map(lambda x: x**2, filter(lambda x: x % 2 == 0, a))
assert even_squares == list(alt)

# Item 10: Prefer enumerate Over range
flavor_list = ['vanilla', 'chocolate', 'pecan', 'strawberry']
for flavor in flavor_list:
    print('%s is delicious' % flavor)

for i in range(len(flavor_list)):
    flavor = flavor_list[i]
    print('%d: %s' % (i + 1, flavor))

# enumerate wraps any iterator with a lazy generator. This generator yields pairs of the
# loop index and the next value from the iterator
for i, flavor in enumerate(flavor_list):
    print('%d: %s' % (i + 1, flavor))
# You can make this even shorter by specifying the number from which enumerate
# should begin counting
for i, flavor in enumerate(flavor_list, 1):
    print('%d: %s' % (i, flavor))


# Item 11: Use zip to Process Iterators in Parallel
