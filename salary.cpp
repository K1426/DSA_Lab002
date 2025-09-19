//Task02
#include <iostream>
using namespace std;

int main() {
    int size = 20, i = 0; //size and counter variables  
    int *salArray = new int[size];//dynamic array of size 20

    // Input salaries
    for (i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i+1) << ": ";
        cin >> salArray[i];
    }
  // Apply increment formula
    for (i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    delete[] salArray;//delete the dynamic array

    return 0;
}