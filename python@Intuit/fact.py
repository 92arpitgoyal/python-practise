def factorial(no):
    print no
    if no <= 1:
            return 1
    else:
        return no*factorial(no - 1)
print factorial(5)

def test_factorial():
    assert factorial(1) == 1
    print 'sucess'
    assert factorial(9) == 81
    print 'success'
    assert factorial(4) != 4
    print 'success'

