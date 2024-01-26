#include <iostream>

int main() {
    int angka;

    // Meminta input dari pengguna
    std::cout << "Program C++ Angka Prima\n====================\n";
    std::cout << "Input satu angka bulat: ";
    std::cin >> angka;

    // Pengecekan apakah angka prima atau tidak
    bool prima = true;

    if (angka <= 1) {
        prima = false;
    } else {
        for (int i = 2; i <= angka / 2; ++i) {
            if (angka % i == 0) {
                prima = false;
                break;
            }
        }
    }

    // Menampilkan hasil
    if (prima) {
        std::cout << angka << " adalah angka prima\n";
    } else {
        std::cout << angka << " bukan angka prima\n";
    }

    return 0;
}