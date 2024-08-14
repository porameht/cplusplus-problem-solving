#include <iostream>

// using namespace std;

int main() {
  int num = 10;

  int* ptrNum = &num;

  std::cout << *ptrNum << std::endl;

  *ptrNum = 20;

  std::cout << num << std::endl;

  // basic pointer
  int var = 10;
  int* ptr = &var;

  // pointer to pointer
  int var2 = 10;
  int* ptrVar2 = &var2;
  int** ptrToPtrVar2 = &ptrVar2;

  // array pointer
  // int numbers[] = {1, 2, 3, 4, 5};
  int arr[5] = { 1, 2, 3, 4, 5};
  int* ptrArr = arr;
  std::cout << *ptr << std::endl;

  void myFunc(int a) {
    // todo
  }

  // Pointer to a function that takes an int and returns void
  void (*functionPrt)(int) = myFunc;

  return 0; 
}
