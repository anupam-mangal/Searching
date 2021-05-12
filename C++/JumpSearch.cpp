// Jump Search is done on a sorted array. It does a step wise search followed by a binary search in the
// relevant step where the optimal step is √n for an array of n elements.
// Time Complexity : O(√n) for searching in 'n' elements.
// Space Complexity : O(1)

/*
 * @param arr A vector of integer elements.
 * @param item The integer to be searched.
 *
 * @return int Returns the index of the item if found, -1 otherwise.
 */

int jump_search(vector<int> arr, int item)
{
    // Item is not present in sorted array
    if (arr.empty() || item < arr[0]) || item > arr[arr.size() - 1])
        return -1;

    unsigned int size = arr.size();
    unsigned int step = static_cast<unsigned int>(sqrt(size));
    unsigned int i;

    // Travel the array step wise to find the block where the item could be present.
    for (i = 0; i < size; i += step)
    {
        // 1. We have reached the last block which might be less in length than step.
        if (i >= size)
            break;

        // 2. Item is found in step itself.
        if (item == arr[i])
            return i;

        // 3. Element in step is larger then item. We need to go to the previous step.
        else if (item < arr[i])
            break;
    }

    // We are here due to either point 1 or 3. Both cases we need to go to the
    // previous step.
    i = i - step;

    // For binary search in block we need end index as below.
    unsigned int end = min((i + step), size);
    
    // See "Searching/C++/BinarySearchIterative.cpp" in this repository for below function
    return binary_search_iterative(arr, i, end - 1, item);
}

// Template version of the above algorithm

/*
 * @param arr A vector of elements.
 * @param item The item to be searched.
 *
 * @return int Returns the index of the item if found, -1 otherwise.
 */

template <typename T>
int jump_search_tem(vector<T> arr, T item)
{
    // Item is not present in sorted array
    if (arr.empty() || item < arr[0]) || item > arr[arr.size() - 1])
        return -1;

    unsigned int size = arr.size();
    unsigned int step = static_cast<unsigned int>(sqrt(size));
    unsigned int i;

    // Travel the array step wise to find the block where the item could be present.
    for (i = 0; i < size; i += step)
    {
        // 1. We have reached the last block which might be less in length than step.
        if (i >= size)
            break;

        // 2. Item is found in step itself.
        if (item == arr[i])
            return i;

        // 3. Element in step is larger then item. We need to go to the previous step.
        else if (item < arr[i])
            break;
    }

    // We are here due to either point 1 or 3. Both cases we need to go to the
    // previous step.
    i = i - step;

    // For linear search in block we need end index as below.
    unsigned int end = min((i + step), size);
    
    // See "Searching/C++/BinarySearchIterative.cpp" in this repository for below function
    return binary_search_iterative_tem(arr, i, end - 1, item);
}
