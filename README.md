# Tugas TLS: Pemrograman
### Dibuat oleh :
### Lagrange_Muhammad Khoirunas

---

# TETI Mart

TETI Mart adalah program kasir sederhana yang dikembangkan menggunakan C++. Program ini mensimulasikan sistem point-of-sale untuk toko kecil, memungkinkan pengguna untuk memproses transaksi pembelian dan mencetak struk.

## Fitur

- Input informasi pelanggan (nama dan alamat)
- Pemilihan barang dari katalog yang tersedia
- Perhitungan otomatis total harga
- Pencetakan struk belanja
- Dukungan untuk multiple transaksi
- Pencatatan nomor antrean

## Persyaratan Sistem

- Compiler C++ (misalnya g++)
- Sistem operasi yang mendukung C++ (Windows, macOS, Linux)

## Cara Mengcompile

1. Buka terminal atau command prompt
2. Navigasikan ke direktori tempat file program disimpan
3. Jalankan perintah compile:

```
g++ -o teti_mart teti_mart.cpp
```

## Cara Menjalankan Program

Setelah berhasil dicompile, jalankan program dengan perintah:

```
./teti_mart
```

## Penggunaan

1. Saat program dimulai, masukkan nama dan alamat pelanggan.
2. Pilih barang yang ingin dibeli dengan memasukkan nomor yang sesuai.
3. Masukkan jumlah barang yang ingin dibeli.
4. Ulangi langkah 2-3 untuk barang tambahan (maksimal 5 jenis barang).
5. Setelah selesai memilih barang, program akan mencetak struk.
6. Pilih apakah ingin melakukan transaksi lain atau mengakhiri program.

## Katalog Barang

Program ini menyediakan 4 jenis barang:
1. Buku (Rp 5.000)
2. Pensil (Rp 3.000)
3. Pulpen (Rp 4.000)
4. Spidol (Rp 6.000)

## Keterbatasan

- Maksimal 5 jenis barang berbeda per transaksi
- Tidak ada fitur untuk mengubah atau membatalkan barang yang sudah dipilih
- Tidak ada sistem inventaris atau penyimpanan data transaksi

## Pengembangan di Masa Depan

- Implementasi sistem inventaris
- Penambahan fitur untuk mengubah atau membatalkan barang dalam keranjang
- Penyimpanan riwayat transaksi
- Peningkatan validasi input
- Penambahan lebih banyak jenis barang

## Kontribusi

Kontribusi untuk meningkatkan program ini sangat diterima. Silakan fork repositori ini, lakukan perubahan, dan ajukan pull request.


## Kontak

Jika Anda memiliki pertanyaan atau saran, silakan hubungi pengembang di: [muhammadkhoirunas@mail.ugm.ac.id]

---

Terima kasih telah menggunakan TETI Mart!
