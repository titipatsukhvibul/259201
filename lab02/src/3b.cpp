#include <iostream>

using namespace std;

int main() {
  float a, s, t, u, v;
  cout << "Enter a (m/s^2) = ";
  cin >> a;
  a *= -1;
  cout << "Enter s (m) = ";
  cin >> s;
  cout << "Enter t (s) = ";
  cin >> t;

  u = (s - 0.5 * a * t * t) / t;
  v = u + a * t;

  cout << "Starting Velocity u (m/s) = " << u << endl;
  cout << "Terminal Velocity v (m/s) = " << v << endl;
}