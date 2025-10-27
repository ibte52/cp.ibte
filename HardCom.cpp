#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    double log_A_pow_B = B * log(A);
    double log_C_pow_D = D * log(C);

    if (log_A_pow_B > log_C_pow_D) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
