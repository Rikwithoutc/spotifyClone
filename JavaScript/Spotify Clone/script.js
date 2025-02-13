
let currentSong = new Audio();
let songsArr;
let vol = 0.5;

function secondsToMinutesSeconds(seconds){

    const minutes = Math.floor(seconds/60);
    const sec = Math.floor(seconds%60);

    const formattedMinutes = String(minutes).padStart(2, '0');
    const formattedSeconds = String(sec).padStart(2, '0');
    
    return `${formattedMinutes}:${formattedSeconds}`;
}

async function getSongs() {
    try {
        let response = await fetch('https://api.github.com/repos/Rikwithoutc/spotifyClone/contents/allSongs');
        let data = await response.json();
        return data; // This is now properly returned
    } catch (error) {
        console.error('Error:', error);
    }
}


const playMusic = (track, pause=false)=> {
    // let audio = new Audio("songs/"+track);
    currentSong.src = "songs/"+track;
    currentSong.play();
    currentSong.volume = vol;
    play.src = "pause.svg";
    document.querySelector('.songinfo').innerHTML = track;
    document.querySelector('.songtime').innerHTML = "00:00 / 00:00";
}




async function main() {

    
    
    songsArr = await getSongs(); // Wait for songs to be fetched
    let songUL = document.querySelector(".songList").getElementsByTagName("ul")[0];
    for (const song of songsArr) {
        songUL.innerHTML = songUL.innerHTML + `<li>
                            <img src="music.svg" alt="">
                            <div class="info">
                                <div>${song.name}</div>
                                <div>Rik</div>
                            </div>
                            <div class="playnow">
                                <span>Play Now</span>
                                <img src="play.svg" alt="">
                            </div></li>`;
    }

    Array.from(document.querySelector(".songList").getElementsByTagName("li")).forEach(e => {

        e.addEventListener("click", element=> {
            console.log(e.querySelector('.info').firstElementChild.innerHTML);
            playMusic(e.querySelector('.info').firstElementChild.innerHTML.trim());
            // console.log(e.querySelector('.info').firstElementChild.innerHTML.trim());
        })
    })


    play.addEventListener("click", ()=> {

        if(currentSong.paused){
            currentSong.play();
            play.src = "pause.svg"
        } else {
            currentSong.pause();
            play.src = "play.svg"
        }
    })


    currentSong.addEventListener("timeupdate", ()=> {
        // console.log(currentSong.currentTime, currentSong.duration);
        document.querySelector('.songtime').innerHTML = `${secondsToMinutesSeconds(currentSong.currentTime)} / ${secondsToMinutesSeconds(currentSong.duration)}`
        document.querySelector('.circle').style.left = (currentSong.currentTime/currentSong.duration)*100 + "%";
    })
    
    document.querySelector('.seekbar').addEventListener('click', e=> {
        let percent = (e.offsetX/e.target.getBoundingClientRect().width)*100;
        document.querySelector('.circle').style.left = percent + '%';
        currentSong.currentTime = (currentSong.duration * percent)/100
    })

    document.querySelector('.hamburger').addEventListener('click', () => {
        document.querySelector('.left').style.left = "0";
    })

    document.querySelector('.close').addEventListener('click', () => {
        document.querySelector('.left').style.left = "-120%";
    })

    previous.addEventListener('click', () => {
        currSongName = currentSong.src.split('/').pop().replaceAll('%20', ' ')
        // console.log(currSongName);
        let songNames = songsArr.map(obj => obj.name);
        len = songNames.length;
        // console.log(songNames);
        // console.log(songsArr);
        let index = songNames.indexOf(currSongName);
        // console.log(index);

        if(index-1 >= 0) {
            playMusic(songNames[index-1]);
        }else {
            index = len-1;
            playMusic(songNames[index]);
        }
    })

    next.addEventListener('click', () => {
        currSongName = currentSong.src.split('/').pop().replaceAll('%20', ' ')
        // console.log(currSongName);
        let songNames = songsArr.map(obj => obj.name);
        len = songNames.length;
        // console.log(songNames);
        // console.log(songsArr);
        let index = songNames.indexOf(currSongName);
        // console.log(index);

        playMusic(songNames[(index+1)%len]);
    })

    document.addEventListener('keydown', function(event) {
        if(event.key === 'ArrowUp'){
            if (currentSong.volume < 1) {  // Ensure volume doesn't exceed 1 (max volume)
                vol = Math.min(currentSong.volume + 0.1, 1);  // Increase volume by 0.1
                currentSong.volume = vol;  // Increase volume by 0.1
                console.log(`Volume increased to: ${Math.round(currentSong.volume * 100)}%`);
                event.preventDefault();
            } else {
                console.log("Volume is already at maximum!");
            }
        }
    })

    document.addEventListener('keydown', function(event) {
        
        if(event.key === 'ArrowDown'){
            if (currentSong.volume > 0) {  // Ensure volume doesn't exceed 1 (max volume)
                vol = Math.max(currentSong.volume - 0.1, 0);  // Increase volume by 0.1
                currentSong.volume = vol;  // Increase volume by 0.1
                console.log(`Volume decreased to: ${Math.round(currentSong.volume * 100)}%`);
                event.preventDefault();
            } else {
                console.log("Volume is already at minimum!");
            }
        }
    })
}


main();
