#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v;
    int in;
    for (int i = 0; i < 5; i++) {
        cout << "Element : ";
        cin >> in;
        v.push_back(in);
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << "Vector : " << v[i] << endl;
    }    

    bool flag = true;
    for (int i = 1; i <= v.size(); i++) {
        if (v[i] <= v[i - 1]) {
            flag = false;
        }
    }
    cout << endl;
    cout << "Array : " << flag << endl;
    return 0;
}