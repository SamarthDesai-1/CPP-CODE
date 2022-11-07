#include <iostream>

using namespace std;

int main() {
    int n ,digits = 0;
    cout << "Enter N : ";
    cin >> n;

    cout << endl;

    while (n > 0) {
        digits++;
        n = n / 10;
    }

    cout << "Number of digits is : " << digits << endl;
    return 0;
}