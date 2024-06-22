#include <iostream>
using namespace std;
int main() {
  int num1, num2, product = 0;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  while (num2 > 0) {
    product += num1;
    num2--;
  }
  cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
  return 0;
}
