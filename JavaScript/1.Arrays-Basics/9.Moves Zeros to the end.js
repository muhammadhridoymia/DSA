//Move Zeros to the end
// Example:
// array=[1,0,3,0,4,7,5,0,5,8,5,9,0,3,7,3,8,2,0,2,6,3];
// Output=[1,3,4,7,5,5,8,5,9,3,7,3,7,3,8,2,,2,6,3]

const Move = (arr) => {
  if (arr.length === 0) {
    return [];
  }

  let newArr = [];
  let zeros = [];

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === 0) {
      zeros.push(0);
    } else {
      newArr.push(arr[i]);
    }
  }

  for (let i = 0; i < zeros.length; i++) {
    newArr.push(zeros[i]);
  }

  return newArr;
};

const array = [
  1, 0, 3, 0, 4, 7, 5, 0, 5, 8, 5, 9, 0, 3, 7, 3, 8, 2, 0, 2, 6, 3,
];

console.log(Move(array));
