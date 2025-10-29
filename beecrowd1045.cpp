#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    double sides[3];
    cin >> sides[0] >> sides[1] >> sides[2];


    sort(sides, sides + 3, greater<double>());
    double A = sides[0];
    double B = sides[1];
    double C = sides[2];

    cout << fixed << setprecision(1);


    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {

        if (A*A == B*B + C*C)
            cout << "TRIANGULO RETANGULO" << endl;
        else if (A*A > B*B + C*C)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else if (A*A < B*B + C*C)
            cout << "TRIANGULO ACUTANGULO" << endl;


        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (A == B || B == C || A == C)
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
