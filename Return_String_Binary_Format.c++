#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[20] = "hello";
    int count = 0;
    int integer = 0;
    int ans = 0;
    int power = 1;
    int length = strlen(str);

    cout << endl;
    for (int i = 0; i < length; i++) {
        integer += str[i];
    }    
    cout << "Sum of string : " << integer << endl;
    while (integer > 0) {
        int paritydigit = integer % 2;
        ans += (paritydigit * power);
        power *= 10;
        integer /= 2;
    }
    int convert;
    convert = char(ans);
    cout << convert << endl;
    cout << "Integer format : " << ans << endl;
    return 0;
}