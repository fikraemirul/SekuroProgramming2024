1.	Overview:
•	Program ini adalah simulasi pergerakan drone dengan fitur-fitur seperti penampilan lokasi, gerakan dengan kecepatan dan waktu, penyimpanan koordinat ke dalam file, pengambilan koordinat dari file, serta undo dan redo.
•	Program ditulis dalam bahasa C++ dan menggunakan beberapa fungsi dan struktur data, seperti vektor dan fungsi trigonometri.
•	Dimisalkan drone bergerak dengan kecepatan 5 kotak/s selama 3 detik pada sudut 45 derajat dari horizontal positif searah jarum jam
2.	Fitur-fitur Program:
•	lokasi():
•	Menampilkan lokasi drone dengan koordinat x dan y saat ini.
•	gerak_2(double v, double t, double theta):
•	Menggerakkan drone dengan kecepatan v kotak/s selama t detik pada sudut theta derajat dari horizontal positif searah jarum jam.
•	save():
•	Menyimpan koordinat drone ke dalam file "history.txt".
•	load():
•	Memuat koordinat drone dari file "history.txt".
•	undo():
•	Mengembalikan koordinat drone ke posisi sebelumnya dalam history.
•	redo():
•	Mengembalikan koordinat drone setelah perintah undo.
•	main():
•	Menginisialisasi program, memuat koordinat dari file jika ada, melakukan gerakan drone, menyimpan koordinat saat program ditutup, serta menunjukkan penggunaan undo dan redo.
3.	Cara Menjalankan Program:
•	Pastikan kompiler C++ seperti g++ sudah terinstal di sistem Anda.
•	Salin kode program ke dalam berkas drone_simulation.cpp.
•	Buka terminal atau command prompt.
•	Compile program dengan perintah g++ drone_simulation.cpp -o drone_simulation_output.
•	Jalankan program dengan perintah ./drone_simulation_output atau drone_simulation_output.exe (pada Windows).
•	Program akan menampilkan output sesuai dengan fungsi-fungsi yang diimplementasikan.
