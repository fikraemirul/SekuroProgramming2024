#include <iostream>

int main() {
    int a, b;

    // Meminta input rentang a dan b
    std::cout << "Masukkan rentang a dan b (pisahkan dengan spasi): ";
    std::cin >> a >> b;

    // Menampilkan bilangan genap dalam rentang a dan b
    std::cout << "Bilangan genap dalam rentang " << a << " sampai " << b << " adalah: ";

    // Jika a adalah bilangan ganjil, naikkan nilainya satu untuk memulai dari bilangan genap
    if (a % 2 != 0) {
        a++;
    }

    // Untuk memeriksa hanya bilangan genap
    for (int i = a; i <= b; i += 2) {
        // Menampilkan bilangan genap
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}