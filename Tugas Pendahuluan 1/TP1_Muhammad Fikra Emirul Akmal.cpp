#include <iostream>

int main() {
    char jenis_pesawat;

    while (true) {
        // Langkah 1: Meminta input dari pengguna
        std::cout << "Masukkan jenis pesawat (a/b/o): ";
        std::cin >> jenis_pesawat;

        // Langkah 2: Conditional di dalam loop
        if (jenis_pesawat == 'a') {
            for (int i = 3; i > 0; --i) {
                std::cout << i << "...\n";
            }
            std::cout << "PESAWAT A BERANGKAT\n";
        } else if (jenis_pesawat == 'b') {
            for (int i = 5; i > 0; --i) {
                std::cout << i << "...\n";
            }
            std::cout << "PESAWAT B BERANGKAT\n";
        } else if (jenis_pesawat == 'o') {
            std::cout << "PENERBANGAN DITUTUP\n";
            break;  // Keluar dari loop jika input adalah 'o'
        } else {
            std::cout << "INPUT TIDAK VALID\n";
        }
    }

    return 0;
}