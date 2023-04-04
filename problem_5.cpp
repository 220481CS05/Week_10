//
//  main.cpp
//  problem_5
//
//  Created by Muhammadsodiq Tohirov on 04/04/23.
//
#include <iostream>

using namespace std;

void printEven(int start, int n) {
    if (start > n) {
        return;
    }
    
    if (start % 2 == 0) {
        cout << start << " ";
    }
    
    printEven(start + 1, n);
    
    if (start % 2 != 0) {
        cout << start << " ";
    }
}

int main() {
    int n;
    cout << "Enter a value for N: ";
    cin >> n;
    
    cout << "Even and odd values from 1 to " << n << " are: ";
    printEven(1, n);
    cout << endl;
    
    return 0;
}


