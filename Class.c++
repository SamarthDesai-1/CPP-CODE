#include <iostream>

using namespace std;
class stream {
    public:
        int count = 0;
        int strlen() {
            char str[10];
            cout << "Enter String : ";
            cin >> str;
            for (int i = 0; str[i] != '\0'; i++) {
                count++;
            }
            return count;
        }
        int length = strlen();
};
int main() {
    char str[20];
    stream s;
    cout << s.length << endl;
    return 0;
}