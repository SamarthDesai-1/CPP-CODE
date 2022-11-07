#include <iostream>
#include <cstring>

using namespace std;

void strev(char string[]) {
    int length = strlen(string);
    for (int i = length - 1; i >= 0; i--) {
        cout << string[i];
    }
}
int main() {
    char str[20];
    cout << "Enter String : ";
    cin >> str;
    int length = strlen(str);

    cout << endl;
    strev(str);
    return 0;
}
