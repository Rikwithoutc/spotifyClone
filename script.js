async function main() {

    let a = await fetch("file:///D:/Projects/JavaScript/Spotify%20Clone/songs");
    let response = await a.text();
    console.log(response);
}

main();