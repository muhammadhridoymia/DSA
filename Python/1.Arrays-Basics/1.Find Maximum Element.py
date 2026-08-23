# Find the maximum element in an array

def find_max(arr):
    if not arr:
        return None
    max_element = arr[0]
    for num in arr:
        if num > max_element:
            max_element = num
    return max_element


array = [3, 5, 7, 2, 8]
print("Maximum element:", find_max(array))