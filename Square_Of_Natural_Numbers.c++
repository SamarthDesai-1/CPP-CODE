#include <iostream>

using namespace std;

void square(int n) {
    int sq = 1;
    for (int i = 1; i <= n; i++) {
        sq = i * i;
        cout << sq << " ";
    }
}
int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    square(n);
    
    return 0;
}