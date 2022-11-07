#include <iostream>

using namespace std;

int main() {
    int array[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter array element for position " << i << " : ";
        cin >> array[i];
    }

    cout << endl;

    for (int i = 5; i >= 0; i--) {
        cout << array[i] << endl;
    }
    
    return 0;
}