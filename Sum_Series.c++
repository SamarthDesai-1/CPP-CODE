#include <iostream>

using namespace std;

int main() {
    int n ,sum = 0;
    cout << "Enter N : ";
    cin >> n;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
        else {
            sum -= i;
        }
    }

    cout << "Sum of series : " << sum << endl;
    
    return 0;
}