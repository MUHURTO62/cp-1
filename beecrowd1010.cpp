#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int code1, quantity1;
    double price1;
    int code2, quantity2;
    double price2;
    cin >> code1 >> quantity1 >> price1;
    cin >> code2 >> quantity2 >> price2;
    double total = quantity1 * price1 + quantity2 * price2;
    cout << fixed << setprecision(2);
    cout <<  "Valor a pagar : R$ " << total << endl;
    return 0;
}
