#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[50];
    cout << "Enter string : ";
    cin >> str;
    int length = strlen(str);
    
    int ans = 0;
    int power = 1;
    int sum = 0;
    
    for (int i = 0; i < length; i++) {
        sum += str[i];
    }

    while (sum > 0) {
        int paritydigit = sum % 2;
        ans += (paritydigit * power);
        power *= 10;
        sum /= 2;
    }

    cout << "Binary number of string is : " << ans << endl;
    return 0;
}