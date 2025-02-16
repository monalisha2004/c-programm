#include <stdio.h>

void copyArr(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {

        // Copy each element one by one
        arr2[i] = arr1[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];

      // Copy arr1 to arr2
    copyArr(arr1, arr2, n);
  
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    return 0;
}
