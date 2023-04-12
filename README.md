A small project that I made with a team for my Algorithms class in my 2nd year.


## Merge Sort Algorithm Psuedocode & Time Complexity

```
Input: Two sorted arrays arr1[] and arr2[] of size m and n, and an integer k.
Output: The kth element of the merged sorted array.

1. Merge the two sorted arrays into a single sorted array of size m+n.
2. Return the kth element of the merged sorted array.
```
### Time Complexity with Documentation:

* The first step in this algorithm is to merge two sorted arrays into a single sorted array, which takes O(m + n) time.
* The second step is to find the kth element in the merged array, which takes O(1) time.
* Therefore, the time complexity of this algorithm is O(m + n).

## Binary Search Algorithm Psuedocode & Time Complexity

```
Input: Two sorted arrays arr1[] and arr2[] of size m and n, and an integer k.
Output: The kth element of the merged sorted array.

1. Set left and right pointers for both arrays.
2. While left pointer is less than or equal to right pointer for both arrays:
    a. Find the middle index of both arrays.
    b. Calculate the total number of elements from 0 to mid in both arrays.
    c. If the total number of elements is less than k, discard the left half of both arrays and update left pointers to mid + 1.
    d. Otherwise, discard the right half of both arrays and update right pointers to mid - 1.
3. Return the minimum of arr1[left1] and arr2[left2].
```

### Time Complexity with Documentation:
* In the worst case, the algorithm will have to perform binary search on both arrays, which takes O(log m) + O(log n) time.
* The algorithm also needs to count the number of elements from 0 to mid in both arrays for each iteration, which takes O(1) time.
* Therefore, the time complexity of this algorithm is O(log m + log n).


## Comparison and Efficiency

The binary search algorithm is more efficient than the merge and sort algorithm, because it has a lower time complexity of O(log m + log n) compared to O(m + n). The binary search algorithm avoids the expensive operation of merging the two arrays, but instead relies on binary search to locate the kth element.

In terms of space complexity, both algorithms require O(m + n) extra space to merge the arrays in the merge and sort algorithm, and O(1) extra space for the binary search algorithm, since it doesn't require any additional memory.

Overall, the binary search algorithm is a more efficient solution for finding the kth element in two sorted arrays.



