#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    double tax = 0.0;

    if (salary <= 2000.00) {
        cout << "Isento" << endl;
        return 0;
    }


    if (salary > 2000.00) {
        double portion = min(salary - 2000.00, 1000.00);
        tax += portion * 0.08;
    }


    if (salary > 3000.00) {
        double portion = min(salary - 3000.00, 1500.00);
        tax += portion * 0.18;
    }


    if (salary > 4500.00) {
        double portion = salary - 4500.00;
        tax += portion * 0.28;
    }

    cout << fixed << setprecision(2);
    cout << "R$ " << tax << endl;

    return 0;
}
