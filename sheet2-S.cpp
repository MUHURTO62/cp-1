#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int sum = 0;
        int start = X + 1;
        int end = Y - 1;

        if (X > Y) {
            start = Y + 1;
            end = X - 1;
        }

        for (int i = start; i <= end; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
