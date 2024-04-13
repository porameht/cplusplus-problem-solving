#include <iostream>
using namespace std;

int main() {

    int num1 = 10;
    int num2 = 1;

    int sum = num1 + num2;
    int diff = num1 - num2;
    int dot_product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;

    cout << "sum value: " << sum << endl;
    cout << "diff value: " << diff << endl;
    cout << "dot_product value: " << dot_product << endl;
    cout << "remainder value: " << remainder << endl;

    char firstChar = 'H';
    char secondChar = 'i';
    char space = ' ';
    char exclamationMask = '!';

    cout << firstChar + secondChar + space + exclamationMask;

    return 0;
}