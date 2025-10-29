#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int original[3] = {a, b, c};
    int sorted[3] = {a, b, c};


    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }


    for (int i = 0; i < 3; i++) {
        cout << sorted[i] << endl;
    }

    cout << endl;


    for (int i = 0; i < 3; i++) {
        cout << original[i] << endl;
    }

    return 0;
}
