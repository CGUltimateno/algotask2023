int findKthElement(int arr1[], int m, int arr2[], int n, int k) {
    if (m == 0) {
        return arr2[k];
    }
    if (n == 0) {
        return arr1[k];
    }

    if (k == 0) {
        return arr1[0] < arr2[0] ? arr1[0] : arr2[0];
    }

    int mid1 = (m - 1) / 2;
    int mid2 = (n - 1) / 2;

    if ((mid1 + mid2) < k) {
        if (arr1[mid1] > arr2[mid2]) {
            return findKthElement(arr1, m, arr2 + mid2 + 1, n - mid2 - 1, k - (mid2 + 1));
        }
        else {
            return findKthElement(arr1 + mid1 + 1, m - mid1 - 1, arr2, n, k - (mid1 + 1));
        }
    }
    else {
        if (arr1[mid1] > arr2[mid2]) {
            return findKthElement(arr1, mid1, arr2, n, k);
        }
        else {
            return findKthElement(arr1, m, arr2, mid2, k);
        }
    }
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 6, 7, 8, 9, 10 };
    int k = 5;
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int result = findKthElement(arr1, m, arr2, n, k - 1);

    printf("The k'th element is %d\n", result);

    return 0;
}