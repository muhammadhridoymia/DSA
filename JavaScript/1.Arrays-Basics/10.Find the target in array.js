// Find tarret in array
// target = 9
// Example arr=[1,2,3,4,5,9,6]; 
// output =9

const Find=(arr,target)=>{
    if(arr.length===0){
        return[]
    }

    for(let i=0;i<arr.length;i++){
        if(arr[i]===target){
            return arr[i]
        }
    }
    return "Not Found!"
}

const arr=[1,2,3,4,5,9,6]; 
const target=9

console.log(Find(arr,target));