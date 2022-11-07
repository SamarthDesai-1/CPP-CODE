#include <iostream>

using namespace std;

int main() {
    int bin1 ,bin2;
    int ans1 = 0;
    int power1 = 1;
    int ans2 = 0;
    int power2 = 1;
    cout << "Enter first binary number : ";
    cin >> bin1;
    cout << "Enter second binary number : ";
    cin >> bin2;

    cout << endl;

    while (bin1 > 0) {
        int lastdigit = bin1 % 10;
        ans1 += (lastdigit * power1);
        power1 *= 2;
        bin1 /= 10;
    }
    while (bin2 > 0) {
        int lastdigit = bin2 % 10;
        ans2 += (lastdigit * power2);
        power2 *= 2;
        bin2 /= 10;
    }

    if (ans1 > ans2) {
        cout << "Greatest number is : " << ans1 << endl;
    }
    else {
        cout << "Greatest number is : " << ans2 << endl;
    }

    cout << endl; 

    cout << "Binary first to decimal is : " << ans1 << endl;
    cout << "Binary second to decimal is : " << ans2 << endl;
    return 0;
}