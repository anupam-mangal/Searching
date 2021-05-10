// Binary Search is done on a sorted array and runs in O(n) time
// where 'n' is the number of elements in the array used for serarching.

// Instead of an integer array an integer vector could also be used.

int binary_search_iterative(int arr[], int left, int right, int item)
{
    // Item should be inside the range of sorted array elements
    if ((item < arr[left]) || (item > arr[right]))
        return -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (item == arr[mid])
            return mid;

        else if (item < arr[mid])
            right = mid - 1;
        
        else // item > arr[mid]
            left = mid + 1;
    }
    
    return -1;
}
