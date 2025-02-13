let n = prompt("Enter a number: ");

arr = [];

for(let i = 0; i<n; i++){
    arr.map((val, idx) => arr[idx+1]= i+1);
}

console.log(arr);