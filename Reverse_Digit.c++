#include <iostream>

using namespace std;

int main() {
    int n;
    int reverse = 0;
    cout << "Enter N : ";
    cin >> n;

    cout << endl;

    while (n > 0) {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n /= 10;
    }

    cout << "The reverse digit : " << reverse << endl;
    return 0;
}