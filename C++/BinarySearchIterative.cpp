// Binary Search is done on a sorted array.
// Time Complexity : O(log n) for searching in 'n' elements.
// Space Complexity : O(1)

/*
 * @param arr A vector of integer elements.
 * @param left A positive integer specifying the leftmost index in the array to consider for the search.
 * @param right A positive integer specifying the rightmost index in the array to consider for the search.
 * @param item The integer to be searched.
 *
 * @return int Returns the index of the item if found, -1 otherwise.
 */
int binary_search_iterative(vector<int> arr, unsigned int left, unsigned int right, int item)
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

// Template version of the above algorithm

/*
 * @param arr A vector of elements.
 * @param left A positive integer specifying the leftmost index in the array to consider for the search.
 * @param right A positive integer specifying the rightmost index in the array to consider for the search.
 * @param item The item to be searched.
 *
 * @return int Returns the index of the item if found, -1 otherwise.
 */

template <typename T>
int binary_search_iterative_tem(vector<T> arr, unsigned int left, unsigned int right, T item)
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
