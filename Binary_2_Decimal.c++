#include <iostream>

using namespace std;

int main() {
    int bin ,ans = 0 ,power = 1;
    cout << "Enter binary number : ";
    cin >> bin;

    cout << endl;

    while (bin > 0) {
        int lastdigit = bin % 10;
        ans += (lastdigit * power);
        power *= 2;
        bin /= 10;
    }
    
    cout << "Decimal number is : "<< ans << endl;
    return 0;
}