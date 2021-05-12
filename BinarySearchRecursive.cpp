
// Binary Search is done on a sorted array and runs in O(n) time
// where 'n' is the number of elements in the array used for serarching.

// Instead of an integer array an integer vector could also be used.

int binary_search(int arr[], int start, int end, int item)
{
    // Item should be inside the range of sorted array elements
    if ((item < arr[start]) || (item > arr[end]))
        return -1;

    if (end < start)
        return -1;

    int mid = start + (end - start) / 2;

    if (item == arr[mid])
        return mid;

    else if (item < arr[mid])
        return binary_search(arr, start, mid - 1, item);
        
    else // item > arr[mid]
        return binary_search(arr, mid + 1, end, item);
}