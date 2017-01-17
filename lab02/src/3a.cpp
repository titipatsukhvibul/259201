#include <iostream>

using namespace std;

int main() {
  float a, t, v, s, u = 0;
  cout << "Enter x (m/s^2) = ";
  cin >> a;
  // cout << "a = " << a << endl;
  cout << "Enter t (s) = ";
  cin >> t;

  v = u + a * t;
  s = u * t + 0.5 * a * t * t;

  cout << "Velocity v (m/s) = " << v << endl;
  cout << "Distance s (m) = " << s << endl;
}