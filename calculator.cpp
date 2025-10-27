#include <iostream>

int main() {
    using namespace std;
    long long A, B;
    char S;
    cin >> A >> S >> B;
    long long result;
    if (S == '+') {
        result = A + B;
    } else if (S == '-') {
        result = A - B;
    } else if (S == '*') {
        result = A * B;
    } else if (S == '/') {
        result = A / B;
    }
    cout << result << endl;
    return 0;
}
