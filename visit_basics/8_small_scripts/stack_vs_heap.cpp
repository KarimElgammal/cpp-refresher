#include <iostream>
using namespace std;

void showAddresses() {

    int stackVar1 = 10;
    int stackVar2 = 20;
    
    int* heapVar1 = new int(30);
    int* heapVar2 = new int(40);
    
    cout << "stack addresses:\n";
    cout << "stackVar1 address: " << &stackVar1 << " referring to value: " << stackVar1 << endl;
    cout << "stackVar2 address: " << &stackVar2 << " referring to value: " << stackVar2 << endl;
    
    cout << "\nheap addresses:\n";
    cout << "heapVar1 adress: " << heapVar1 << " referring to value: " << *heapVar1 << endl;
    cout << "heapVar2 adress: " << heapVar2 << " referring to value: " << *heapVar2 << endl;
    
    // Clean up heap memory
    delete heapVar1;
    delete heapVar2;
}

int main() {
    showAddresses();
    return 0;
}

/*
High Address   +------------------+
               |       Stack      |
               |        ↓        |  Stack grows DOWN
               |        |        |
               |    Free Space   |
               |        |        |
               |        ↑        |  Heap grows UP
               |       Heap      |
               |    Data Seg     |
Low Address    |    Text Seg     |
               +------------------+
*/