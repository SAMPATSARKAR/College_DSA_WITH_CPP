#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temp arrays
    int left[n1], right[n2];

    // Copy data
    for(int i = 0; i < n1; i++)
        left[i] = arr[low + i];

    for(int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    // Merge temp arrays back
    int i = 0, j = 0, k = low;

    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) arr[k++] = left[i++];
        else arr[k++] = right[j++];
    }

    // Copy remaining
    while(i < n1) arr[k++] = left[i++];
    while(j < n2) arr[k++] = right[j++];
}

void mergeSort(int arr[], int low, int high) {
    if(low >= high) return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);       // Left half
    mergeSort(arr, mid + 1, high);  // Right half

    merge(arr, low, mid, high);     // Merge
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
