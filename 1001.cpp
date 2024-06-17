#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    std::vector<long long> numbers;
    long long num;

    while (std::cin >> num) {
        numbers.push_back(num);
    }

    for (int i = numbers.size() - 1; i >= 0; i--) {
        double sqrt_num = sqrt(numbers[i]);
        std::cout << std::fixed << std::setprecision(4) << sqrt_num << std::endl;
    }

    return 0;
}