#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[20];
    char str2[20];
    int positive = 0 ,negative = 0;
    cout << "Enter String One : ";
    cin >> str1;
    cout << "Enter String Second : ";
    cin >> str2;
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    cout << "Length of string 1 : " << length1 << endl;
    cout << "Length of string 2 : " << length2 << endl;
    cout << endl;
    if (length1 == length2) {
        for (int i = 0; i < length1; i++) {
            if (str1[i] == str2[i]) {
                positive++;
            }
            else {
                negative++;
            }
        }
    }
    if (negative == 0) {
        cout << "Strings are same." << endl;
    }
    else {
        cout << "Strings are not same." << endl;
    }

    cout << "+ve : " << positive << endl;
    cout << "-ve : " << negative << endl;
    return 0;
}