let text = ["Initializing Hacking",
    "Reading Files",
    "Password files Detected",
    "Downloading data",
    "Cleaning up"];
/* 
const promise = new Promise((resolve, reject) => {

    let time = Math.random() * 6 + 1;
    setTimeout(() => {
        resolve();
    }, time*1000);

}) */
/* 
function hackingSim(i) {
    
    new Promise((resolve, reject) => {

        time = 1 + Math.random() * 6;
        setTimeout(() => {
            resolve();
        }, time*1000);
    })
    .then(() => {
        const div = document.createElement('div');
        div.innerHTML = `${text[i]}`;
        document.body.append(div);
    })
}

for(let i = 0; i < text.length; i++) {
    hackingSim(i);
} */


function hackingSim(i) {
    return new Promise((resolve) => {
        let time = 1 + Math.random() * 6; // Random delay between 1 and 7 seconds
        console.log(`Delay for "${text[i]}": ${time.toFixed(2)} seconds`);

        setTimeout(() => {
            const div = document.createElement('div');
            div.innerHTML = text[i];
            document.body.append(div);
            console.log(time);
            resolve(); // Resolve promise after displaying text
        }, time * 1000);
    });
}

async function runHackingSim() {
    for (let i = 0; i < text.length; i++) {
        await hackingSim(i); // Wait for each execution before proceeding
    }
    console.log("All hacking steps completed!");

}

runHackingSim();

setInterval(() => {
    let last = document.body.lastElementChild;
    if(last.innerHTML.endsWith('...')){
        last.innerHTML = last.innerHTML.slice(0, last.innerHTML.length -3);
    }else {
        last.innerHTML = last.innerHTML + ".";
    }
},700)
