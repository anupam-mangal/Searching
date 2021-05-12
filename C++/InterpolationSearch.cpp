// Interpolation Search is done on a sorted array. It is similar to recursive binary search with a small difference.
// The pivot used for each search iteration is not exactly the middle elment but a value closer to the searched item.
// It is more suited when array elements are almost uniformly distributed in which case it performs faster than binary search.
// Time Complexity : O(log(log n)) for searching in 'n' elements.
// Space Complexity : O(1)

/*
 * @param arr A vector of integer elements.
 * @param low A positive integer specifying the leftmost index in the array to consider for the search.
 * @param hi A positive integer specifying the rightmost index in the array to consider for the search.
 * @param item The integer to be searched.
 *
 * @return int Returns the index of the item if found, -1 otherwise.
 */
int interpolation_search(vector<int> arr, unsigned int low, unsigned int hi, int item)
{
    if ((low > hi) || (item < arr[low]) || (item > arr[hi]))
        return -1;

    unsigned int pivot = low + ( (item - arr[low]) * (hi - low) /
                        (arr[hi] - arr[low]) );

    if (arr[pivot] == item)
        return pivot;
        
    else if (arr[pivot] < item)
        return interpolation_search(arr, pivot + 1, hi, item);

    else //arr[pivot] > item
        return interpolation_search(arr, low, pivot - 1, item);
}

// Template version of the above algorithm

/*
 * @param arr A vector of elements.
 * @param low A positive integer specifying the leftmost index in the array to consider for the search.
 * @param hi A positive integer specifying the rightmost index in the array to consider for the search.
 * @param item The item to be searched.
 *
 * @return int Returns the index of the item if found, -1 otherwise.
 */

template <typename T>
int interpolation_search(vector<T> arr, unsigned int low, unsigned int hi, T item)
{
    if ((low > hi) || (item < arr[low]) || (item > arr[hi]))
        return -1;

    unsigned int pivot = low + ( (item - arr[low]) * (hi - low) /
                        (arr[hi] - arr[low]) );

    if (arr[pivot] == item)
        return pivot;
        
    else if (arr[pivot] < item)
        return interpolation_search(arr, pivot + 1, hi, item);

    else //arr[pivot] > item
        return interpolation_search(arr, low, pivot - 1, item);
}
