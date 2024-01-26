#include <iostream>

int main() {
    const int size = 10;
    int arr[size];
    int arr2[size];

    // Meminta input dari pengguna untuk array pertama
    std::cout << "Masukkan nilai untuk array pertama (10 nilai dipisahkan spasi): ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Meminta input dari pengguna untuk array kedua
    std::cout << "Masukkan nilai untuk array kedua (10 nilai dipisahkan spasi): ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr2[i];
    }

    // Menampilkan hasil penjumlahan kedua array
    std::cout << "OUTPUT:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] + arr2[i] << ' ';
    }

    return 0;
}
