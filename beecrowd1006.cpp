#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    double media = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << "\n";
    return 0;
}

