#include <iostream>

int main() {
    int n;

    // Meminta input dari pengguna
    std::cout << "Input: ";
    std::cin >> n;

    // Menampilkan pola
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i % 2 == 0) {
                // Jika baris genap, tampilkan angka terus meningkat 1 dan kembali ke-0 jika mencapai 10
                std::cout << (i * n + j) % 10;
            } else {
                // Jika baris ganjil, tampilkan spasi
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}