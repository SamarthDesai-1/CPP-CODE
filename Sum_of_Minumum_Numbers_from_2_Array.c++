#include <iostream>

using namespace std;

int main() {
    int n1 ,n2;

    cout << "Enter N1 : ";
    cin >> n1; 
    cout << "Enter N2 : "; 
    cin >> n2;

    int array1[n1];
    int array2[n2];
    cout << endl;

    for (int i = 0; i < n1; i++) {
        cout << "Enter array element for position " << i << " : ";
        cin >> array1[i];
    }
    cout << endl;
    for (int i = 0; i < n2; i++) {
        cout << "Enter array element for position " << i << " : ";
        cin >> array2[i];
    }
    cout << endl;
    // logic
    int min1;
    int index1 = -1;
    for (int i = 0; i < n1; i++) {
        if (array1[i] < min1) {
            min1 = array1[i];
            index1++;
        }
    }
    cout << "Minimun from array 1 : " << min1 << endl;
    cout << "Index = " << index1 << endl;
    cout << endl;
    int min2;
    int index2 = -1;
    for (int i = 0; i < n2; i++) {
        if (array2[i] < min2) {
            min2 = array2[i];
            index2++;
        }
    }
    cout << "Minimun from array 2 : " << min2 << endl;
    cout << "Index = " << index2 << endl;

    int sum;
    if (index1 != index2) {
        sum = min1 + min2;
        cout << "Summation = " << sum << endl;
    }
    else {
        cout << "Summation is not possible" << endl;
    }
    return 0;
}