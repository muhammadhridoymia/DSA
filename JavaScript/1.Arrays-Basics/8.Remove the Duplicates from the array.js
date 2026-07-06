// Remove the duplicates from the array
// Example:
// [1,2,3,4,5,4,6,7,8,4,9,4]
// Output:
// [1,2,3,4,5,6,7,8,9]

const Remove = (arr) => {
  if (arr.length === 0) {
    return [];
  }

  let newArr = [];

  for (let i = 0; i < arr.length; i++) {
    let found = false;

    for (let j = 0; j < newArr.length; j++) {
      if (arr[i] === newArr[j]) {
        found = true;
        break;
      }
    }

    if (!found) {
      newArr.push(arr[i]);
    }
  }

  return newArr;
};

const array = [1, 2, 3, 4, 5, 4, 6, 7, 8, 4, 9, 4];
console.log(Remove(array));
