/* function loadScript(src, callback) {
    let script = document.createElement('script');
    script.src = src;
    script.onload = () => callback(script);
    document.head.append(script);
}

loadScript('script2.js', (script) => {
    alert(`${script.src} is loaded`);
    alert("Hello World");
}) */

/* 
function myCalc(a, b, callback) {
    let sum = a + b;
    callback(sum);
}

function displaySum(sum) {
    console.log(sum);
}

myCalc(2, 4, displaySum); */

/* const myNum = [1,4,2,-3,-10,5,-6,9,5,-11,-13,-16,20,-25];

const posNum = remNeg(myNum, (x) => x >= 0);
console.log(posNum);

function remNeg(num, callback) {
    let posNum = [];
    for(const x of num) {
        if(callback(x)){
            posNum.push(x);
        }
    }
    return posNum;
} */

setTimeout(func1, 1000);
setTimeout(func2, 2000);
setTimeout(func3, 3000);

function func1() {
    console.log('3');
}

function func2() {
    console.log('2');
}

function func3() {
    console.log('1');
}