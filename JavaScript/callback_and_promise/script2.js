/* time = 1+Math.random()*6;

const promiseOne = new Promise((resolve, reject) => {
    setTimeout(() => {
        console.log('Promise 1 has been resolved');
        resolve(time);
    }, time*1000);
})

promiseOne.then((t) => {
    console.log('Task 1 completed');
    console.log('Time taken:', t);
    
}) */

/* 
let lst = ["Initiating Hacking...", "Searching Files...", "Password Found...", "Downloading Files...", "Cleaning Up...", "Hacking Complete..."];

for (let i = 0; i < lst.length; i++) {
    time = 1 + Math.random() * 6;
    const promise = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve();
        }, time * 1000)
    })

    promise.then(() => {
        console.log(lst[i]);
    });

}
*/
/* 
const promiseTwo = new Promise((resolve, reject) => {
    setTimeout(() => {
        let error = false;
        if (!error) {
            console.log('Promise 2 has been resolved');
            resolve({ user: 'Rik Dutta', password: '1234' });
        } else {
            reject('ERROR: Something Went Wrong!!!');
        }
    })
}, 3000);

promiseTwo
.then((user) => {
    console.log(user);
    return user.user;
})
.then((username) => {
    console.log(username);
})
.catch((err) => {
    console.log(err);
})
.finally(() => {
    console.log('The Promise has settled');
});
 */
/* 
const promiseThree = new Promise((resolve, reject) => {
    setTimeout(()=> {
        let error = true;
        if (!error) {
            console.log('Promise 3 has been resolved');
            resolve({username: 'Pratyus', password: 'abcd'});            
        } else {
            reject('ERROR: JS went wrong!');
        }
    })
}, 1000);

async function consumePromiseThree() {

    try {
        const response = await promiseThree
        console.log(response);
    } catch (error) {
        console.log(error);        
    }
}    

consumePromiseThree() */

/* 
async function getAllUsers() {
    try {
        const response = await fetch('https://jsonplaceholder.typicode.com/users');
        const data = await response.json();
        console.log(data);
    } catch (error) {
        console.log(error);
    }
}
 */

function getAllUsers(){
    fetch('https://jsonplaceholder.typicode.com/users')
    .then((response)=>{
        return response.json()
    })
    .then((data) => {
        console.log(data);
    })
    .catch((err) => {
        console.log('E:', err);
    })
}
getAllUsers();