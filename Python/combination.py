def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact *= i
    return fact

def combination(n, r):
    if r > n:
        return 0  # Invalid case where r > n
    return factorial(n) / (factorial(r) * factorial(n - r))

# Input from user
n = int(input("Enter value of n: "))
r = int(input("Enter value of r: "))

# Output the result
print(f"C({n}, {r}) = {combination(n, r)}")
