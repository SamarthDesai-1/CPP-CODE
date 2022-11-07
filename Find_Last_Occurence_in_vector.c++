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

    int occurence = -1;
    int x;
    cout << "Enter occurence : ";
    cin >> x;

    // Method One
    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] == x) {
    //         occurence = i;
    //     }
    // }

    cout << endl;
    
    // Method Second
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] == x) {
            occurence = i;
            break;
        }
    }
    
    cout << "Last Occurence : " << occurence << endl;

    
    return 0;
}