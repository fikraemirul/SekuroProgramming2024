#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <iomanip>

// Misalkan drone bergerak dengan kecepatan 5 kotak/s selama 3 detik pada sudut 45 derajat dari horizontal positif searah jarum jam
// Deklarasi variabel global
std::vector<std::pair<double, double>> history;  // Untuk menyimpan history koordinat drone
int current_index = -1;  // Indeks saat ini di history

// Fungsi untuk menampilkan lokasi drone
void lokasi() {
    std::cout << "lokasi => (" << std::fixed << std::setprecision(2) << history[current_index].first
              << ", " << history[current_index].second << ")\n";
}

// Fungsi untuk melakukan gerakan dengan kecepatan dan waktu
void gerak_2(double v, double t, double theta) {
    // Menghitung perubahan koordinat berdasarkan kecepatan dan waktu
    double delta_x = v * t * cos(theta);
    double delta_y = v * t * sin(theta);

    // Menambahkan koordinat baru ke dalam history
    history.push_back(std::make_pair(history[current_index].first + delta_x, history[current_index].second + delta_y));
    current_index = history.size() - 1;
}

// Fungsi untuk menyimpan koordinat ke dalam file
void save() {
    std::ofstream file("history.txt");

    for (const auto& coord : history) {
        file << coord.first << " " << coord.second << "\n";
    }

    file.close();
}

// Fungsi untuk memuat koordinat dari file
void load() {
    std::ifstream file("history.txt");

    double x, y;
    history.clear();
    current_index = -1;

    while (file >> x >> y) {
        history.push_back(std::make_pair(x, y));
    }

    file.close();
}

// Fungsi untuk melakukan undo
void undo() {
    if (current_index > 0) {
        current_index--;
        std::cout << "undo() => Undo berhasil\n";
    } else {
        std::cout << "undo() => Tidak dapat undo!\n";
    }
}

// Fungsi untuk melakukan redo
void redo() {
    if (current_index < history.size() - 1) {
        current_index++;
        std::cout << "redo() => Redo berhasil\n";
    } else {
        std::cout << "redo() => Tidak dapat redo\n";
    }
}

int main() {
    // Memuat koordinat dari file saat program dimulai
    load();

    // Jika history kosong (misalnya, file tidak ada atau kosong), inisialisasi koordinat awal
    if (history.empty()) {
        history.push_back(std::make_pair(0.0, 0.0));
        current_index = 0;
    } else {
        // Jika ada data dalam history, atur indeks saat ini ke posisi terakhir
        current_index = history.size() - 1;
    }

    // Contoh penggunaan fungsi gerak_2
    lokasi();
    gerak_2(5.0, 3.0, M_PI / 4);  // Kecepatan 5 kotak/s, waktu 3 detik, sudut 45 derajat
    lokasi();

    // Menyimpan koordinat ke dalam file saat program ditutup
    save();

    // Melakukan undo dan redo
    undo();
    lokasi();
    redo();
    lokasi();

    return 0;
}