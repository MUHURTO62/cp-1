#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        int countOnes = 0;

        while (N > 0) {
            if (N % 2 == 1)
                countOnes++;
            N /= 2;
        }

        int result = (1 << countOnes) - 1;

        cout << result << endl;
    }

    return 0;
}
