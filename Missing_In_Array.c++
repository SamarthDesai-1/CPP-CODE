#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    int array[n];
    for (int &in : array) {
        cout << "Enter Element : ";
        cin >> in;
    }
    int sum = 0;
    int natural = 0;
    int result;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    natural = n * (n + 1) / 2;
    result = natural - sum;
    cout << "Missing number : " << result << endl;
    
    return 0;
}