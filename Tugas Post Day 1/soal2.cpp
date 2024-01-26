#include <iostream>

int main() {
    int N;

    // Meminta input jumlah bilangan
    std::cout << "Jumlah bilangan : ";
    std::cin >> N;

    // Memastikan N lebih dari 0 untuk menghindari pembagian oleh 0
    if (N <= 0) {
        std::cerr << "Jumlah bilangan harus lebih dari 0." << std::endl;
        return 1;  // Keluar program dengan kode error
    }

    float total = 0;

    // Meminta N buah input dan menghitung total
    for (int i = 1; i <= N; ++i) {
        float bilangan;
        std::cout << "Bilangan " << i << " : ";
        std::cin >> bilangan;

        total += bilangan;
    }

    // Menghitung rata-rata dan menampilkannya
    float rata_rata = total / N;
    std::cout << "RATA-RATA : " << rata_rata << std::endl;

    return 0;
}