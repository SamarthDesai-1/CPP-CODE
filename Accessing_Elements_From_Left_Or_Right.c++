#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    vector <int> v;
    cout << "Enter Size : ";
    cin >> n;
    int in;
    for (int i = 0; i < n; i++) {
        cout << "Element : ";
        cin >> in;
        v.push_back(in);
    }
    cout << endl;
    for (int element : v) {
        cout << "Vector : " << element << endl;
    }
    cout << endl;
    int indexsum = 0;
    float center;
    int key;
    cout << "Enter key : ";
    cin >> key;
    for (int i = 0; i < v.size(); i++) {
        indexsum += i;
        center = indexsum / v.size();
        if (key == v[i]) {
            cout << i << endl;
            if (i < center) {
                cout << "Access from beginning" << endl;
                // break;
            }
            else if (i > center) {
                cout << "Access from end" << endl;
                // break;
            }
            else {
                cout << "You can access from both the ends" << endl;
                // break;
            }
        }
    }
    cout << "Sum : " << indexsum << endl;
    cout << "Center : " << center << endl;
    return 0;
}