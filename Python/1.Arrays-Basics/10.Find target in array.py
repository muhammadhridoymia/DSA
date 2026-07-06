# Find tarret in array
# target = 9
# Example arr=[1,2,3,4,5,9]; output =9

def Find(arr,target):
    if not arr:
        return
    for n in arr:
        if n ==target:
            return n
    return "not found"



arr=[1,2,3,4,5,9]
target=9

print("Target is :",Find(arr,target))