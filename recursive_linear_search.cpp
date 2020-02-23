//
// Created by John Kennedy on 2/23/20.
//
#include <iostream>

using namespace std;

int linear_search(int arr[], int size, int key);


int main() {
    int arr_size, key;
    cout << "Enter the size of the array: ";
    cin >> arr_size;

    int arr[arr_size];

    cout << "Enter the elements of the array" << endl;

    for (int i = 0; i < arr_size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    int key_pos = linear_search(arr, arr_size, key);
    if (key_pos == -1) {
        cout << key << " was not found :(" << endl;
    }
    else {
        cout << key << " was found at position " << key_pos << endl;
    }
}

int linear_search(int arr[], int size, int key) {
    if (size == 0) {
        return -1;
    }
    else if (key == arr[size - 1]) {
        return size;
    }
    else {
        return linear_search(arr, size - 1, key);
    }
}