#A number whose square ends with the number itself
# like 5--> 5^2 = 25;

def findAuto(n):
    auto = False
    m = n**2
    s = 0
    c = 1
    while m != 0:
        s += (m%10)* c
        c *= 10
        m //= 10
        if s == n:
            auto = True
            break
    return(auto)

#__main__
Q = ''
while Q.lower() != 'y':
    print(findAuto(int(input("Enter a number: "))))
    Q = input("Exit(y/n)")