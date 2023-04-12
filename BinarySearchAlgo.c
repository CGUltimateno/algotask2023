#include <stdio.h>

int kthElement(int arr1[], int arr2[], int m, int n, int k) {
    int left1 = 0, right1 = m - 1, left2 = 0, right2 = n - 1;

    while (left1 <= right1 && left2 <= right2) {
        int mid1 = left1 + (right1 - left1) / 2;
        int mid2 = left2 + (right2 - left2) / 2;
        int totalElements = mid1 + mid2 + 2;

        if (totalElements <= k) {
            if (arr1[mid1] < arr2[mid2]) {
                k -= (mid1 - left1 + 1);
                left1 = mid1 + 1;
            }
            else {
                k -= (mid2 - left2 + 1);
                left2 = mid2 + 1;
            }
        }
        else {
            if (arr1[mid1] < arr2[mid2]) {
                right2 = mid2 - 1;
            }
            else {
                right1 = mid1 - 1;
            }
        }
    }

    if (left1 > right1) {
        return arr2[left2 + k - 1];
    }
    else {
        return arr1[left1 + k - 1];
    }
}

int main() {
    int arr1[] = { 1, 3, 4, 5, 7, 9 };
    int arr2[] = { 2, 4, 6, 8, 10 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int k = 5;

    printf("kth element is: %d", kthElement(arr1, arr2, m, n, k));
    return 0;
}