//
//  main.cpp
//  problem_4
//
//  Created by Muhammadsodiq Tohirov on 04/04/23.
//

#include <iostream>
using namespace std;
void st() {
  static int i = 10;
  i *= 2;
  cout << "i = " << i << endl;
}

int main() {
  st();
  st();
  st();
  st();
  return 0;
}

