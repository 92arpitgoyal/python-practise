input_nos = [1,2,5,6,8]
def is_even(no):
    if no % 2 == 0:
        return True
def square(x):
    return x*x
def square_of_only_even_numbers(nos):
    even_nos = filter(is_even, nos)
    return map(square, even_nos)
print 'Squares of even nos out of ' + str(input_nos) + ' are ' + str(square_of_only_even_numbers(input_nos))
