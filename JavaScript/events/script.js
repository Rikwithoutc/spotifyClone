let button = document.getElementById('btn');
button.addEventListener('click', ()=>{
    alert('You clicked the button!');
}) 

function getrandomColor(){
    let r = Math.ceil(0 + Math.random()*255);
    let g = Math.ceil(0 + Math.random()*255);
    let b = Math.ceil(0 + Math.random()*255);

    return `rgb(${r}, ${g}, ${b})`;
}

/* setInterval(() => {
    button.style.backgroundColor = getrandomColor();
}, 1000) */

