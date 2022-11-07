#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[20];
    char index;
    char replace;
    cout << "Enter String : ";
    cin >> str;
    cout << "Enter Character to be replace of : ";
    cin >> index;
    cout << "Enter Character to replace of : ";
    cin >> replace;
    int length = strlen(str);

    cout << endl;
    for (int i = 0; i < length; i++) {
        if (str[i] == index) {
            str[i] = replace; 
        }
    }
    cout << "New String : " << str << endl;
    return 0;
}