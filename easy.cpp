#include <bits/stdc++.h>
using namespace std;

 void removeDuplicates(int arr[], int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    cout << i + 1 << endl;   // length after removing duplicates
 }


/*
void missingNUmber(int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    int N = n + 1;              // FIX 1: define N correctly

    for (int i = 0; i < n; i++) {
        xor2 = xor2 ^ arr[i];   // FIX 2: a[i] → arr[i]
        xor1 = xor1 ^ (i + 1);
    }

    xor1 = xor1 ^ N;            // FIX 3: now N exists

    cout << (xor1 ^ xor2) << endl;
}

*/


int main() {
    int t;
    cout << t;
    cin >> t;
   
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

    removeDuplicates(arr, n);
    }
}