# A number which is the sum of cube of it's own digits...
# like 153= (1)^3 + (5)^3 + (3)3^3;

def findArmstrong(n):
    s = 0
    n_ = n
    while n != 0:
        s += (n%10)**3
        n //=10

    if s == n_:
        return True
    else: 
        return False

#___main___
Q = 'y'
while Q.lower() != 'y':
    print(findArmstrong(int(input("Enter any number: "))))
    Q=input("Exit?(y/n)")