#include <iostream>

int main() {
    int tahun;

    // Meminta input tahun dari pengguna
    std::cout << "Tentukan tahun kabisat\nTahun : ";
    std::cin >> tahun;

    // Pengecekan tahun kabisat
    if ((tahun % 400 == 0) || ((tahun % 100 != 0) && (tahun % 4 == 0))) {
        std::cout << tahun << " adalah tahun kabisat\n";
    } else {
        std::cout << tahun << " bukan tahun kabisat\n";
    }

    return 0;
}
