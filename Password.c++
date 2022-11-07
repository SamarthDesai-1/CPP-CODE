#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char setpass[20];
    char conpass[20];
    int positive = 0;
    int negative = 0;

    cout << "Set password : ";
    cin >> setpass;
    cout << "Confirm password : ";
    cin >> conpass;

    int length1 = strlen(setpass);
    int length2 = strlen(conpass);

    cout << endl;
  
    cout << length1 << endl;
    cout << length2 << endl;
    if (length1 == length2) {
        for (int i = 0; i < length2; i++) {
            if (setpass[i] == conpass[i]) {
                positive++;
            }
            else {
                negative++;
            }
        }
        cout << "Positive password : " << positive << endl;
        cout << "Negative password : " << negative << endl;

        if (negative == 0) {
            cout << "Correct Password" << endl;
        }
        else {
            cout << "Incorrect Password" << endl;
        }
    }   
    else {
        cout << "Password length does not match re-enter password." << endl;
    }
    return 0;
}