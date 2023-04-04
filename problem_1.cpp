//
//  main.cpp
//  Problem_1
//
//  Created by Muhammadsodiq Tohirov on 04/04/23.
//
#include <iostream>
using namespace std;
int FL(int arr[], int n) {
    int large = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }
    return large;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int large = FL(arr, n);
    cout << large << endl;

    return 0;
}

