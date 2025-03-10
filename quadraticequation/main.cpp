#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double d, x1, x2;
    int a, b, c;

    cout << "Input a: "; cin >> a;
    cout << "Input b: "; cin >> b;
    cout << "Input c: "; cin >> c;

    d = pow(b, 2) - 4 * a * c;

    cout << "Dis = " << d << " Pow = " << pow(d, 0.5) << endl;

    if(a != 0)
    {
        if(d > 0)
        {
            x1 = (-b - pow(d, 0.5)) / (2 * a);

            x2 = (-b + pow(d, 0.5)) / (2 * a);
            cout << "First X = " << x1 << endl;
            cout << "Second X = " << x2 << endl;
        }

        if(d == 0)
        {
            x1 = -b / (a * 2);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x1 << endl;
        }

        if(d < 0)
        {
            d = -d;
            cout << "x1 = " << -b / (2 * a)  << " + " << pow(d, 0.5) / (2 * a) << "i" << endl;
            cout << "x2 = " << -b / (2 * a)  << " - " << - pow(d, 0.5) / (2 * a) << "i" << endl;
        }
    }

    if(a == 0 && b != 0 && c != 0)
    {
        cout << "X = " << -c / b << endl;
    }

    if(a == 0 && b == 0 && c != 0)
    {
        cout << "no results" << endl;
    }

    return 0;
}
