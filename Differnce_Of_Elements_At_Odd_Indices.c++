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

    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i % 2 == 0) {
            ans += v[i];
        }
        else {
            ans -= v[i];
        }
    }
    cout << "Difference of odd elements and even elements : " << ans << endl;
    
    return 0;
}