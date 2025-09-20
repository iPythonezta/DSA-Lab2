#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int maxLen;
    cout << "Enter the length of the string: ";
    cin >> maxLen;

    cin.ignore();

    char* str = new char[maxLen + 1];
    cout << "Enter the string: ";
    cin.getline(str, maxLen + 1);

    for (int i = 0; i < strlen(str) / 2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;
    delete[] str;
}