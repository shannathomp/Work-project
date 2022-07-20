
const coordinates = [["lat: 37.57941251343841, long: -96.064453125"],["lat:34.79576153473033, long: -96.064453125"],
["lat: 35.08957427943165, long: -106.70711517333986"]]


const li = document.createElement('li')
const lat = document.getElementById('lat')
const lon = document.getElementById('lon')
const latBtn = document.getElementById("lat-btn")
const lonBtn= document.getElementById("lon-btn")

function generate(){
    const randomPositions = Math.floor(Math.random() * coordinates.length)
     const coord = coordinates[randomPositions]
      console.log(coord);
li.innerHTML = coord;

;
 

   ul.appendChild(li)
   }




// latBtn.appendChild(li)

latBtn.addEventListener('click', generate)

