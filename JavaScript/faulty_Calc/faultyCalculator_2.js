

const prompt = require('prompt-sync')(); 


console.log("FAULTY CALCULATOR");
let a = Number(prompt("Enter first number: "));
let b = Number(prompt("Enter second number: "));

let o = prompt("Enter operation: ");

let obj = {
    "+": "-",
    "-": "*",
    "*": "/",
    "/": "**"
}


let random = Math.random();

if (random < 0.1) {
    console.log("Faulty Operation");
    o = obj[o];
}

console.log(eval(`${a} ${o} ${b}`));