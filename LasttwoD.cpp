#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long last_two_digits_a = a % 100;
    long long last_two_digits_b = b % 100;
    long long last_two_digits_c = c % 100;
    long long last_two_digits_d = d % 100;

    long long product = last_two_digits_a * last_two_digits_b * last_two_digits_c * last_two_digits_d;
    long long result = product % 100;

    if (result < 10) {
        cout << 0;
    }
    cout << result << endl;

    return 0;
}
