#include <stdio.h>

int findKthElement(int arr1[], int m, int arr2[], int n, int k) {
    int i = 0, j = 0, kthElement = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            kthElement = arr1[i];
            i++;
        }
        else {
            kthElement = arr2[j];
            j++;
        }

        k--;

        if (k == 0) {
            return kthElement;
        }
    }

    while (i < m) {
        kthElement = arr1[i];
        i++;
        k--;

        if (k == 0) {
            return kthElement;
        }
    }

    while (j < n) {
        kthElement = arr2[j];
        j++;
        k--;

        if (k == 0) {
            return kthElement;
        }
    }

    return -1;
}

int main() {
    int arr1[] = { 2, 4, 6, 8, 10 };
    int arr2[] = { 1, 3, 5, 7, 9 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int k = 5;

    int kthElement = findKthElement(arr1, m, arr2, n, k);

    printf("The k'th element is %d", kthElement);

    return 0;
}