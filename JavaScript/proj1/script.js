console.log("Hello World");

let boxes = document.getElementsByClassName('box')[1].style.backgroundColor = 'green';
// console.log(boxes);



/* let b = document.getElementById('blue');
console.log(b);
b.style.backgroundColor = "cyan"; */
document.getElementById('blue').style.backgroundColor = 'cyan';


document.querySelector('.box').style.backgroundColor = 'red';

// console.log(document.querySelectorAll('.box'));

document.querySelectorAll('.box').forEach(e =>{
    console.log(e);
})

let e = document.getElementsByTagName('div');
console.log(e);