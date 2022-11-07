#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a ,b ,c ,x1 ,x2 ,real ,img ,dis;
    cout << "Enter Edges : ";
    cin >> a >> b >> c;

    dis = (b * b) - (4 * a * c);
    cout << endl;

    if (dis > 0) {
        x1 = (- b + sqrt(dis)) / (2 * a);
        x2 = (- b - sqrt(dis)) / (2 * a);
        cout << "Roots are Equal and different." << endl;
        cout << "X1 : " << x1 << endl;
        cout << "X2 : " << x2 << endl;
    }
    else if (dis == 0) {
        cout << "Roots are Equal and same." << endl;
        x1 = - b / 2 * a;
        cout << "X1 = X2 : " << x1 << endl; 
    }
    else {
        cout << "Roots are Complex and Different" << endl;
        real = - b / 2 * a;
        img = sqrt(-dis) / 2 * a;
        cout << "x1 = " << real << " + " << img << "i" << endl;
        cout << "x2 = " << real << " - " << img << "i" << endl;
    }
    return 0;
}