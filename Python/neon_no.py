# a number whose sum of digits of square of the number is the number itself...
# like 9 = 8 + 1
# like 1 = 1
# There are only 3 neon numbers: 0, 1 ,9

def findNeon(n):
    m = n**2
    s = 0
    while m != 0:
        s += m%10
        m //= 10
    if s == n:
        return True
    else: 
        return False

#__main__

for i in range(100000):
    if findNeon(i):
        print(i) 