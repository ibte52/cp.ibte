
#include <iostream>
#include <iomanip>

int main() {

    int a;
    long long b;
    char c;
    float d;
    double e;


    if (!(std::cin >> a >> b >> c >> d >> e)) {

        return 1;
    }


    std::cout << a << std::endl;
    std::cout << b << std::endl;


    std::cout << c << std::endl;



    std::cout << std::fixed << std::setprecision(5) << d << std::endl;

    std::cout << std::fixed << std::setprecision(5) << e << std::endl;


    return 0;
}
