// Fungsi untuk menghitung jumlah elemen dalam array
int jumlah(int arr[], int size) {
    int total = 0;

    // Melakukan iterasi untuk setiap elemen dalam array
    for (int i = 0; i < size; ++i) {
        total += arr[i];  // Menambahkan nilai elemen ke total
    }

    return total;  // Mengembalikan jumlah total
}

int main() {
    int N;
    std::cin >> N;

    int arr[N];

    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    // Memanggil fungsi jumlah untuk menghitung jumlah elemen dalam array
    std::cout << jumlah(arr, N) << std::endl;

    return 0;
}

//Penjelasan program sebagai berikut :
Dalam program ini, fungsi jumlah menerima dua parameter: array integer arr dan ukuran array size. Fungsi tersebut menghitung jumlah elemen-elemen array dan mengembalikan nilai totalnya. Pada fungsi main, kita memanggil fungsi jumlah dengan array arr dan ukuran N.