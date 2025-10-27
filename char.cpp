#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cin >> ch;
    if (std::islower(ch)) {
        std::cout << (char)std::toupper(ch) << std::endl;
    } else {
        std::cout << (char)std::tolower(ch) << std::endl;
    }
    return 0;
}
