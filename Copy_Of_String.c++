#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[10] ,str2[10] ,str3[10];
    cout << "Enter String : ";
    cin >> str1;
    cout << "Enter string to be copied : ";
    cin >> str2;

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    cout << endl;
    if (length1 < length2) {
        cout << "Operation cannot be performed on strings." << endl;
    }
    else {
        for (int i = 0; i < length2; i++) {
            str3[i] = str1[i];
            str1[i] = str2[i];
            cout << str1[i] << endl;
        }
        cout << "String 1 is copied into String 2" << endl;
    }
    
    return 0;
}