/* Create a faulty calculator that performs the specified wrong operations 10% of times
+ ---> -
- ---> *
* ---> /
/ ---> **
*/

const prompt = require('prompt-sync')(); 


console.log("FAULTY CALCULATOR")
let a = Number(prompt("Enter first number: "))
let b = Number(prompt("Enter second number: "))

let o = prompt("Enter operation: ")

let flag = true
if (Math.floor(Math.random() * 10) + 1 == 1) {
    flag = false
    console.log("Wrong operation")
}

if (o == "+") {
    if (flag) {
        console.log(a + b)
    } else {
        console.log(a - b)
    }
} else if (o == "-") {
    if (flag) {
        console.log(a - b)
    } else {
        console.log(a * b)
    }
} else if (o == "*") {
    if (flag) {
        console.log(a * b)
    } else {
        console.log(a / b)
    }
} else if (o == "/") {
    if (flag) {
        console.log(a / b)
    } else {
        console.log(a ** b)
    }
} else {
    console.log("Enter a valid operator");
}