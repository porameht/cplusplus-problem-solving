#include <iostream>

using namespace std;



int main() {
  
    for (int i = 0; i < 5; i++) {
        cout << "value of i: " << i << endl;
    }

    int x = 0;

    while (x < 10) {
        cout << "value of x: " << x << endl;
        x++;
    }

    int numbers[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << "value of numbers[" << i << "]: " << numbers[i] << endl;
    }

    string message = "Hello, World!";

    for (int i = 0; i < message.length(); i++) {
        cout << "char ar index" << i << ": " << message[i] << endl;
    }

    return 0;
}



