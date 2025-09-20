#include <iostream>

using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Memory location pointed by the pointer: " << ptr << endl;
    cout << "Value at the memory location: " << *ptr << endl;
}


int main() {
    int iValue = 42;

    analyze_pointer(&iValue);

    int *heapInt = new int(100);
    analyze_pointer(heapInt);

    return 0;
}
