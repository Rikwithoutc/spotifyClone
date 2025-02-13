function factorial(n) {
    if (n==0) {
        return 1;
    }
    return factorial(n-1)*n;
}

function factorial2 (n) {
    let fact = 1;
    for(let i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

console.log(factorial(6))
console.log(factorial2(5))
