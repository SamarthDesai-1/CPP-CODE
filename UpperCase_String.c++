#include <iostream>

using namespace std;

int main() {
    char str[20];
    char first;
    cout << "Enter String : ";
    cin >> str;

    cout << endl;
    for (int i = 0; i < 1; i++) {
        first = str[i];
    }
    cout << "First Character is : " << first << endl;
    
    char temp;
    for (char i = 97; i <= 122; i++) {
        if (i == first) {
            temp = i - 32;
        }
    }
    for (int i = 0; i < 1; i++) {
        str[i] = temp;
    }
    cout << "New String : " << str << endl;
    
    return 0;
}
    // Finding Capital Letter ASCII Value 
    // for (char i = 65 ,j = 65; i <= 90 ,j <= 90; i++ ,j++) {
    //     if (i == first) {
    //         cout << i << " " << int(j) << endl;
    //     }
    // }

    // Finding Small Letter ASCII Value 
    // for (char i = 97 ,j = 97; i <= 122 ,j <= 122; i++ ,j++) {
    //     cout << i << " " << int(j) << endl;
    // }