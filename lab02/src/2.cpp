#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const float e = 2.71828;
  int x;
  cout << "Enter x = " << endl;
  cin >> x;
  float y = (3 * pow(x, 3)) + 2 * e + pow(2, 2 * x + 1) + sqrt(pow(x, 2) + 1);
  cout << "Result y = " << y << endl;
}