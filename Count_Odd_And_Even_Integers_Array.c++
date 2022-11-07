#include <iostream>

using namespace std;

int main() {
    int array[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter array element for position " << i << " : ";
        cin >> array[i];
    }

    cout << endl;
    int odd = 0 ,even = 0;
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Odd numbers : " << odd << endl;
    cout << "Even numbers : " << even << endl;
    
    
    return 0;
}