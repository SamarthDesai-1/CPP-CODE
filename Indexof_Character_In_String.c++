#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[20];
    char index;
    cout << "Enter String : ";
    cin >> str;
    cout << "Enter Character to get index of : ";
    cin >> index;
    int length = strlen(str);

    cout << endl;
    for (int i = 0; i < length; i++) {
        if (str[i] == index) {
            cout << "Index : " << i << endl;
        }
    }
    
    return 0;
}