#include <iostream>

int main() {
    int N;

    // Meminta input N
    std::cout << "Input: ";
    std::cin >> N;

    // Membuat segitiga bagian atas
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Membuat segitiga bagian bawah
    for (int i = N-1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}