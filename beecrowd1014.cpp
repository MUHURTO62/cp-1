#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X;
    double Y;
    cin >> X >> Y;

    double consumption = X / Y;
    cout << fixed << setprecision(3);
    cout << consumption << " km/l" << endl;

    return 0;
}

