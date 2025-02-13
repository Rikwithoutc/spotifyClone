function viewCounter(views) {
    if (views >= 1000 && views < 1000000) {
        return `${Math.floor(views/1000)}K views`;
    } else if (views >= 1000000) {
        return `${Math.floor(views/1000000)}M views`;
    } else {
        return '${views} views';
    }
}

function ageCalc(months) {
    if (months >= 12) {
        return `${Math.floor(months/12)} years ago`;
    } else {
        return `${months} months ago`;
    }
}

function createCard(thumbnail ,title , author, views, months, duration) {

    document.querySelector('.thumbnail').insertAdjacentHTML('afterbegin', `<img src="${thumbnail}" alt="thumbnail">`);

    document.querySelector('#title').insertAdjacentHTML('afterbegin', title);

    document.querySelector('#channel').insertAdjacentHTML('afterbegin', author);

    document.querySelector('#views').insertAdjacentHTML('afterbegin', `${viewCounter(views)}`);

    document.querySelector('#months_ago').insertAdjacentHTML('afterbegin', `${ageCalc(months)}`);

    document.querySelector('#time').insertAdjacentHTML('afterbegin', duration);
}



createCard("ex-13_thumbnail2.avif",'I donate Kidney Stones to 1000 people!!!', 'MrBest', 2345678212, 25, '34:12');