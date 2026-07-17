// Move Zeros to End (Two Pointers)
// example:
// arr = [0, 1, 0, 3, 12]
// output= [1, 3, 12, 0, 0]

const Move = (arr) => {
  if (!Array.isArray(arr)) {
    return;
  }

  let index = 0;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] !== 0) {
      arr[index] = arr[i];
      index++;
    }
  }
  while (index < arr.length) {
    arr[index] = 0;
    index++;
  }
  return arr;
};

const arr = [0, 1, 0, 3, 12];
console.log(Move(arr));
