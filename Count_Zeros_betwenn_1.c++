#include <iostream>

using namespace std;

int main() {

    int bin ,count = 0;
    cout << "Enter binary number : ";
    cin >> bin;

    while (bin > 0) {
        int lastdigit = bin % 2;
        if (lastdigit == 0) {
            count++;
        }
        bin /= 10;
    }

    cout << "Number of zeros : " << count << endl;

    return 0;
}