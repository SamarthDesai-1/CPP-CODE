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
    int occurence = 0;
    int x;
    cout << "Enter occurence : ";
    cin >> x;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            occurence++;
        }
    }
    cout << "Number of occurences are : " << occurence << endl;
    return 0;
}