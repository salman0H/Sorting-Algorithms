#include <iostream>

// Merge function for merging two subarrays
template <class T>
void Merge(T *arr, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    T L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];
    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Natural merge sort function
template <class T>
void NaturalMergeSort(T *arr, int size) {
    int p = 0;
    while (p < size - 1) {
        int q = p;
        while (q < size - 1 && arr[q] <= arr[q + 1])
            q++;
        if (q == size - 1)
            break;
        int r = q + 1;
        while (r < size - 1 && arr[r] <= arr[r + 1])
            r++;
        Merge(arr, p, q, r);
        p = r + 1;
    }
}

// Example usage
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    NaturalMergeSort(arr, size);
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    return 0;
}
