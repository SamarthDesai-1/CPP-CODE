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
    int x;
    cout << "Enter occurence : ";
    cin >> x;
    int greater = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > x) {
            greater++;
        }
    }
    cout << "Elements greater than occurence are : " << greater << endl;
    return 0;
}