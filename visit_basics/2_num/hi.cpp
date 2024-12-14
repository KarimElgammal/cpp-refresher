#include <iostream>

using namespace std;

int main() {
    int num = 5;
    int const num2 = 10;
    cout << "The number is: " << num << endl;
    cout << "The constant number is: " << num2 << endl;
    cout << "The sum is: " << num + num2 << endl;
    return 0;
}