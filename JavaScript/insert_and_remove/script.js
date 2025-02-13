let div = document.createElement('div');
div.innerHTML = "This is inserted using <b>setAttribute</b>";
div.setAttribute('class', 'inserted');
document.querySelector('.container').append(div);

let cont = document.querySelector('.container');
cont.insertAdjacentHTML('afterbegin', '<span>This was inserted using <b>insertAdjacentHTML</b></span>')

document.querySelector('.inserted').remove();