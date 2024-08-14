#include <iostream>

int main() {

  int arr[] = {10, 20, 30, 40, 50};
  int *ptr = arr; // Pointer to the first element of the array

  int length = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

  std::cout << "Array elements: ";

  for (int i = 0; i < length; ++i) {
    std::cout << *(ptr + i) << " ";
  }
  
  return 0;
}