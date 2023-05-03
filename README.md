A small project that I made with a team for my Algorithms class in my 2nd year.


## Merge Sort Algorithm Psuedocode & Time Complexity

```
function find_kth_element(arr1, arr2, m, n, k):
 i = 0
 j = 0
 count = 0
 while i < m and j < n:
 if arr1[i] < arr2[j]:
 count += 1
 if count == k:
 return arr1[i]
 i += 1
 else:
 count += 1
 if count == k:
 return arr2[j]
 j += 1
 while i < m:
 count += 1
 if count == k:
 return arr1[i]
 i += 1
 while j < n:
 count += 1
 if count == k:
 return arr2[j]
 j += 1
```
### Time Complexity with Documentation:

* The first step in this algorithm is to merge two sorted arrays into a single sorted array, which takes O(m + n) time.
* The second step is to find the kth element in the merged array, which takes O(1) time.
* Therefore, the time complexity of this algorithm is O(m + n).

## Binary Search Algorithm Psuedocode & Time Complexity

```
function findKthElement(arr1, arr2, k):
 if arr1.length == 0:
 return arr2[k]
 if arr2.length == 0:
 return arr1[k]
 if k == 0:
 return min(arr1[0], arr2[0])
 mid1 = (arr1.length - 1) / 2
 mid2 = (arr2.length - 1) / 2
 if (mid1 + mid2) < k:
 if arr1[mid1] > arr2[mid2]:
 return findKthElement(arr1, arr2[mid2+1:], k - (mid2+1))
 else:
 return findKthElement(arr1[mid1+1:], arr2, k - (mid1+1))
 else:
 if arr1[mid1] > arr2[mid2]:
 return findKthElement(arr1[:mid1], arr2, k)
 else:
 return findKthElement(arr1, arr2[:mid2], k)
```

### Time Complexity with Documentation:
* In the worst case, the algorithm will have to perform binary search on both arrays, which takes O(log m) + O(log n) time.
* The algorithm also needs to count the number of elements from 0 to mid in both arrays for each iteration, which takes O(1) time.
* Therefore, the time complexity of this algorithm is O(log m + log n).


## Comparison and Efficiency

The binary search algorithm is more efficient than the merge and sort
algorithm, because it has a lower time complexity of O(log m + log n)
compared to O(m + n). The binary search algorithm avoids the
expensive operation of merging the two arrays, but instead relies on
binary search to locate the kth element.
In terms of space complexity, both algorithms require O(m + n) extra
space to merge the arrays in the merge and sort algorithm, and O(1)
extra space for the binary search algorithm, since it doesn't require
any additional memory.
Overall, the binary search algorithm is a more efficient solution for
finding the kth element in two sorted arrays



