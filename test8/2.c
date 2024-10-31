#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int arr1 = 0, arr2 = n - 1;
    while (arr1 < arr2) {
        int mid = (arr1 + arr2) / 2;
        if (A[mid] < A[mid + 1]){arr1 = mid + 1;} 
        else {arr2 = mid;}
    }
    printf("%d", A[arr1]);
    return 0;
}
