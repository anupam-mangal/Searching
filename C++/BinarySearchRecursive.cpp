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
int binary_search_recursive(vector<int> arr, unsigned int start, unsigned int end, int item)
{
    if (end < start)
        return -1;

    int mid = start + (end - start) / 2;

    if (item == arr[mid])
        return mid;

    else if (item < arr[mid])
        return binary_search_recursive(arr, start, mid - 1, item);
        
    else // item > arr[mid]
        return binary_search_recursive(arr, mid + 1, end, item);
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
int binary_search_recursive_tem(vector<T> arr, unsigned int left, unsigned int right, T item)
{
    if (end < start)
        return -1;

    int mid = start + (end - start) / 2;

    if (item == arr[mid])
        return mid;

    else if (item < arr[mid])
        return binary_search_recursive_tem(arr, start, mid - 1, item);
        
    else // item > arr[mid]
        return binary_search_recursive_tem(arr, mid + 1, end, item);
}
