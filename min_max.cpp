//
// Created by John Kennedy on 2/22/20.
//
#include <iostream>

using namespace std;

void find_min_and_max(int arr[], int left, int right, int *min, int *max);

int main() {
    int arr_size, min, max;
    cout << "Enter the size of the array: ";
    cin >> arr_size;

    int arr[arr_size];

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < arr_size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    find_min_and_max(arr, 0, arr_size - 1, &min, &max);

    cout << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
}

void find_min_and_max(int arr[], int left, int right, int *min, int *max) {
    if (right - left == 1) {
        if (arr[left] <= arr[right]) {
            *min = arr[left];
            *max = arr[right];
        } else {
            *min = arr[right];
            *max = arr[left];
        }
    } else if (left == right) {
        *min = *max = arr[left];
    } else if (left < right) {
        int mid, min1, min2, max1, max2;

        mid = (left + right) / 2;

        find_min_and_max(arr, left, mid, &min1, &max1);
        find_min_and_max(arr, mid + 1, right, &min2, &max2);

        if (min1 < min2) {
            *min = min1;
        } else {
            *min = min2;
        }

        if (max1 > max2) {
            *max = max1;
        } else {
            *max = max2;
        }
    }
}