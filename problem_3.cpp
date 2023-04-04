//
//  main.cpp
//  Problem_3
//
//  Created by Muhammadsodiq Tohirov on 04/04/23.
//

#include <iostream>
using namespace std;
int x = 220481;
void fun(){
    x += 1000;
}
int main() {
    int x = 2005;
    cout << "Global variable :: " << ::x << endl;
    cout << "Local variable :: " << x << endl;
    cout << "Product Local variable and Global variable :: " << ::x * x << endl;
    fun();
    cout << "Global x after sum :: " << ::x << endl;
    return 0;
}
