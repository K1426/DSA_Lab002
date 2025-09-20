//string_reverse
#include <iostream>
using namespace std;

void reverse_string(string* ptr)
{
    string str = "";
    //a string var to store the reversed version
    int size = (*ptr).length();
    for (int i = 1; i <= size; i++)
        str+=(*ptr)[size - i];
    *ptr = str;
    //assign the reversed sring value to the value at address associated with the pointer
}

int main()
{
    string *s = new string("");
    cout << "Please enter a word, phrase or sentence:\n";
    getline(cin, *s);
    reverse_string(s);
    cout << "The reverse of the string you entered is:\n" << *s;
    delete s;
    return 0;
}