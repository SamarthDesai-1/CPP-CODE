#include <iostream>

using namespace std;

int main() {
    int dec ,ans = 0 ,power = 1;
    cout << "Enter decimal number : ";
    cin >> dec;

    cout << endl;

    while (dec > 0) {
        int paritydigit = dec % 2;
        ans += (paritydigit * power);
        power *= 10;
        dec /= 2;
    }

    cout << "Binary number : " << ans << endl;
    return 0;
}