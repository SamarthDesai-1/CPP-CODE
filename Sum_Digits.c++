#include <iostream>

using namespace std;

int main() {
    int n ,sum = 0;
    cout << "Enter N : ";
    cin >> n;

    cout << endl;
     
    while (n > 0) {
        int lastdigit = n % 10;
        sum = sum + lastdigit;
        n /= 10;
    }

    cout << "The sum of digits : " << sum << endl;
    return 0;
}