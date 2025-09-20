//analyze_pointer
#include <iostream>
using namespace std;

void analyze_pointer(int*ptr)
{
    cout << "Memory location associated with the pointer: " << ptr << endl;//show memory address
    cout << "Value stored at the address associated with the pointer: " << *ptr << endl;//show value at memory address
}

int main()
{
    int stack_value = 7;//integer on stack
    int *heap_value = new int(9);//integer in heap

    cout << "\nDetails of integer on stack:\n";
    analyze_pointer(&stack_value);//pass address of stack integer to analyze pointer function
    cout << "\nDetails of integer in heap:\n";
    analyze_pointer(heap_value);//pass the pointer of integer in heap to analyze pointer function

    delete heap_value;//delete the value at this address

    return 0;
}