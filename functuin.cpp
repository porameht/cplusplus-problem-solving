#include <iostream>
using namespace std;

double areaOfCircle(double radius) {
    return 3.14159 * radius * radius;
}

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}


int main() {
    double radius;

    cout << "Enter the radius: ";

    cin >> radius;

    double area = areaOfCircle(radius);

    cout << "Area of the circle: " << area << endl;


    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}