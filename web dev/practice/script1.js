function sqr(n){
    console.log(n*n);
}

let arr = [1,3,4,2];

// arr.forEach((val)=>console.log(val**2));
// arr.forEach((val, i)=>sqr(arr[i]));

// let arr2 = arr.map((val)=>val*val);
// console.log(arr2);

// let evenArr = arr.filter((val)=>{return val%2==0});
// console.log(evenArr);

// let sumArr = arr.reduce((prev, curr)=>{return prev+curr});
// console.log(sumArr);

let largNum = arr.reduce((prev, curr)=>{return prev>curr? prev:curr});
console.log(largNum);