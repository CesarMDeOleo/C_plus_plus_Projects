#include <iostream>

using namespace std;

// Function to find the median of an array
double findMedian(double arr[], int n) {

    int i, j;
    double temp;
    // Sort the array in ascending order using bubble sort algorithm
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (n % 2 == 0) {
        // If the array has even amounted of elements, return the average of the middle two elements
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;

    } else {
        // If the array has odd number of elements, return the middle element
        return arr[n/2];
    }
}

int main() {

    // Test the function using an array
    double arr[] = {2.0, 4.0, 1.0, 3.0, 5.0};

    int n = sizeof(arr)/sizeof(arr[0]);

    double median = findMedian(arr, n);

    cout << "\nThe Median value in this array is " << median << ".\n";

    return 0;
}