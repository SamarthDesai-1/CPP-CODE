#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    int array[n];
    int key;
    for (int &in : array) {
        cout << "Enter Element : ";
        cin >> in;
    }
    cout << endl;
    cout << "Enter your searching key : ";
    cin >> key;
    cout << endl;
    int ans = -1;
    int negative;
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}