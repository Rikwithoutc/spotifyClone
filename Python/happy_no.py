#A number that results to 1 after a sequence of steps.
#-->Starting with any positive int replace it with the sum of squares of its digits
#-->Repeat the process until ! is obtained as result...or it loops endlessly...
#like 19:
# 1^2 + 9^2 = 82
# 8^2 + 2^2 = 68
# 6^2 + 8^2 = 100
# 1^2 + 0^2 + 0^2 = 1 <---19 is a happy number

def sumSquare(n):
    s = 0
    while n!=0:
        s += (n%10)**2
        n = n//10
    return s

def findHappy(n, l=[]):
    
        s = sumSquare(n)
        if s == 1:
            return True
        else:
            if s in l:
                return False
            else:
                l.append(s)
                return findHappy(s, l)


#__main__

print(findHappy(int(input("Enter a number: "))))
# print(sumSquare(19))