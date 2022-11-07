#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[20] ,str2[20];
    int sum1 = 0 ,sum2 = 0 ,total ,power = 1;
    long int ans = 0;

    cout << "Enter string one : ";
    cin >> str1;
    cout << "Enter string two : ";
    cin >> str2;

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    for (int i = 0; i < length1; i++) {
        sum1 += str1[i];
    }
    for (int i = 0; i < length2; i++) {
        sum2 += str1[i];
    }

    total = sum1 + sum2;
    cout << total << endl;

    cout << endl;
    while (total > 0) {
        int paritydigit = total % 2;
        ans += (paritydigit * power);
        power *= 10;
        total /= 2;
    }
    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << endl;
    cout << "Binary format of two input string is : " << ans << endl;
    return 0;
}