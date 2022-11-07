#include <iostream>

using namespace std;

int main() {
    int dec ,ans = 0 ,power = 1 ,sum = 0;
    cout << "Enter decimal number : ";
    cin >> dec;

    cout << endl;
    for (int i = 1; i <= dec; i++) {
        sum += i;
    }
    while (sum > 0) {
        int paritydigit = sum % 2;
        ans += (paritydigit * power);
        power *= 10;
        sum /= 2;
    }

    cout << "Sum of decimal number in binary format is : " << ans << endl;
    return 0;
}