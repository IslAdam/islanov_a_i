#include <iostream>
#include <vector>


int main() {
    int a = 0, m = 0, s = 0;
    std::cin >> a >> m;
    a %= m;
    s += a;
    if (s == 0) {
        std::cout << "Yes";
        return 0;
    }
    int c = m * 10;
    s += s;
    s %= m;
    --c;
    while (s != 0 && c > 0) {
        s += s;
        s %= m;
        --c;
    }
    if (s != 0) {
        std::cout << "No";
        return 0;
    }
    std::cout << "Yes";
    return 0;
}