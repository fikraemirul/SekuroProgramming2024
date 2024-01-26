#include <iostream>
#include <cmath>

// Fungsi untuk menghitung luas lingkaran
float luas(float r) {
    return M_PI * r * r; // M_PI adalah konstanta yang menyimpan nilai π (pi)
}

int main() {
    // Menggunakan fungsi luas dengan beberapa contoh nilai radius
    std::cout << luas(3) << std::endl;    // Output: 28.2743
    std::cout << luas(5.5) << std::endl;  // Output: 95.0332

    return 0;
}