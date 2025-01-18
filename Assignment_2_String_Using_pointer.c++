#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str[20];
    char *ptr = str;
    int length;
    cout << "Enter String : ";
    cin >> str;

    cout << endl;
    length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (*ptr == 's') {
            *ptr = 'j';
        }
        *ptr++;
    }
    cout << str << endl;
    return 0;

}