//
//  main.cpp
//  Problem_2
//
//  Created by Muhammadsodiq Tohirov on 04/04/23.
//

#include <iostream>
using namespace std;
int SLN(int arr[], int n) {
    int large = arr[0];
    int secondlarge = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > large) {
            secondlarge = large;
            large = arr[i];
        }
        else if (arr[i] > secondlarge && arr[i] != large) {
            secondlarge = arr[i];
        }
    }
    return secondlarge;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << SLN(arr, n) << endl;
    return 0;
}

