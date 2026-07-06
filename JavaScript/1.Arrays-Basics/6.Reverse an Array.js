// Reverse an Array;
// example: arr= [10, 5, 8, 20, 3];
// output: [3, 20, 8, 5, 10];

const Reverse = (arr) => {
  if (arr.length === 0) {
    return;
  }

  let ReverseArr = [];

  for (let i = arr.length - 1; i >= 0; i--) {
    ReverseArr.push(arr[i]);
  }
  return ReverseArr;
};

const arr = [10, 5, 8, 20, 3];
console.log(Reverse(arr));
