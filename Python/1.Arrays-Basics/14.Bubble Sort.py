# Bubble Sort


def BubbleSort(arr):

    if not arr:
        return []

    n = len(arr)

    for i in range(n):

        for j in range(n - 1 - i):

            if arr[j] > arr[j + 1]:

                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    return arr


array = [11, 3, 9, 5, 7, 2, 8]

print(BubbleSort(array))