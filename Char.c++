#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    char ascii = ch;
    int ans = 0;
    int power = 1;

    while (ascii > 0) {
        int paritydigit = ascii % 2;
        ans += (paritydigit * power);
        power *= 10;
        ascii /= 2;
    }

    cout << "Binary number is : " << ans << endl;
    return 0;
}