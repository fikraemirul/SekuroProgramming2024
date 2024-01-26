// Keluaran program adalah sebagai berikut :
10               // Nilai dari variabel a
0x111111         // Alamat dari variabel a
0x444444         // Alamat dari variabel pb
0x333333         // Alamat dari variabel pa
10               // Nilai yang ditunjuk oleh pointer pa
0x222222         // Nilai yang ditunjuk oleh pointer ppb (alamat dari variabel b)
10               // Nilai yang ditunjuk oleh pointer ppa (nilai yang ditunjuk oleh pointer pa)
200              // Perkalian nilai yang ditunjuk oleh pointer pb dan nilai yang ditunjuk oleh pointer ppb

Penjelasan singkat:
cout << a << endl;: Menampilkan nilai dari variabel a.
cout << &a << endl;: Menampilkan alamat dari variabel a.
cout << pb << endl;: Menampilkan alamat dari variabel pb.
cout << ppa << endl;: Menampilkan alamat dari pointer pa.
cout << *pa << endl;: Menampilkan nilai yang ditunjuk oleh pointer pa (nilai dari variabel a).
cout << *ppb << endl;: Menampilkan nilai yang ditunjuk oleh pointer ppb (alamat dari variabel b).
cout << **ppa << endl;: Menampilkan nilai yang ditunjuk oleh pointer ppa (nilai yang ditunjuk oleh pointer pa).
cout << *pb * **ppb << endl;: Menampilkan hasil perkalian nilai yang ditunjuk oleh pointer pb dan nilai yang ditunjuk oleh pointer ppb.