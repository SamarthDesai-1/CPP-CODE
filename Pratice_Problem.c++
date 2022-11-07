#include <iostream>

using namespace std;

int main() {
    int a ,b;
    int raise = 1;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter A raised to number : ";
    cin >> b;

    cout << endl;

    for (int i = 1; i <= b; i++) {
        raise = raise * a;
    }

    cout << "A raised to B : " << raise << endl;
    return 0;
}