#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double N;
    cin >> N;


    int totalCents = round(N * 100);

    int notas[6] = {100, 50, 20, 10, 5, 2};
    int moedas[6] = {100, 50, 25, 10, 5, 1}; // in cents

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int count = totalCents / (notas[i] * 100);
        cout << count << " nota(s) de R$ " << fixed << setprecision(2) << (double)notas[i] << endl;
        totalCents -= count * notas[i] * 100;
    }

    cout << "MOEDAS:" << endl;


    int count1 = totalCents / 100;
    cout << count1 << " moeda(s) de R$ 1.00" << endl;
    totalCents -= count1 * 100;


    for (int i = 1; i < 6; i++) {
        int count = totalCents / moedas[i];
        cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] / 100.0 << endl;
        totalCents -= count * moedas[i];
    }

    return 0;
}

