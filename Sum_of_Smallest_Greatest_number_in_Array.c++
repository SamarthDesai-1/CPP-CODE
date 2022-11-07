#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter array element for position " << i << " : ";
        cin >> array[i];
    }
    cout << endl;
    int sum;
    int max = 0;
    int min;
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << max << " " << min << endl;
    sum = max + min;
    cout << "Sum of smallest and greatest number is : " << sum << endl;
    return 0;
}