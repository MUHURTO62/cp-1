#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string A;
    double salary, sales;
    cin >> A >> salary >> sales;
    double total = salary + (sales * 15.0) / 100;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << "\n";
    return 0;

}

