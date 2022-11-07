#include <iostream>

using namespace std;

int main() {
    int n ,m;
    cout << "Enter N : ";
    cin >> n;
    cout << "Enter M : ";
    cin >> m;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << "*" << endl;
    }
    for (int i = 1; i <= m; i++) {
        cout << "*" << " ";
    }
    
    return 0;
}