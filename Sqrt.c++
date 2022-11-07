#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    float result;

    cout << endl;
    for (int i = 1; i <= n; i++) {
        result = sqrt(i);
        cout << "Square of " << i << " : " << result << endl;
    }
    
    return 0;
}