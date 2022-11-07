#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    int array[n];
    for (int &in : array) {
        cout << "Enter element for array position : ";
        cin >> in;
    }
    cout << endl;
    cout << "Array Elements" << endl;

    // for each loop
    for(int index : array) {
        cout << index << endl;
    }

    
    
    return 0;
}