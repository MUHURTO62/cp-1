#include<iostream>
#include<iomanip>
using namespace std;
int main () {
    int num, wh;
    double rate;
    cin >> num >> wh >> rate;
    double SALARY = rate * wh;
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << num << "\n";
    cout << "SALARY = U$ " << SALARY <<"\n";
    return 0;
}
