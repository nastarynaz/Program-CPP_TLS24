#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

void cetakStruk(string Nama, string Alamat, int nomorAntrean, string namaBarang[], 
int totalBarang, int jumlahBarang[], int itemIndex, int totalHarga, int hargaBarang[]) {

    // cetakStruk(Nama, Alamat, nomorAntrean, namaBarang, totalBarang)
        cout << "\n" << string(40, '=') << endl;
        cout << setw(20) << "" << "TETI Mart" << endl;
        cout << setw(15) << "" << "---Struk Akhir---" << endl;
        cout << setw(15) << "" << "Antrean ke-" << nomorAntrean << endl;

        time_t timenow = time(0);
        string datenow = ctime(&timenow);
        cout << "\nDate: " << datenow << endl;

        cout << "\nPelanggan" << endl;
        cout << string(10, '-') << endl;
        cout << "Nama: " << Nama << endl;
        cout << "Alamat: " << Alamat << endl;
        cout << "Antrean: " << nomorAntrean << endl;

        cout << "\nBarang" << endl;
        cout << string(10, '-') << endl;
        
        cout << "\nDaftar barang yang dibeli:\n";
        cout << left << setw(15) << "Nama Barang" << setw(15) << "Jumlah Barang" << setw(15) << "Total Harga" << endl;
        for (int i = 0; i < itemIndex; i++) {
            cout << left << setw(15) << namaBarang[i] << setw(15) << jumlahBarang[i] << setw(15) << hargaBarang[i] << endl;
        }
        cout << string(40, '-') << endl;
        cout << left << setw(15) << "Total" << setw(15) << totalBarang << setw(15) << totalHarga << endl;
        cout << "\n" << string(25, '-') << endl;
        cout << "~~Terima Kasih~~" << endl;
        cout << "Sampai Jumpa Lagi" << endl;
        cout << string(40, '~') << endl;
        
}
    
int main(){
    int buku = 5000, pensil = 3000, pulpen = 4000, spidol = 6000;
    string Nama, Alamat;
    int nomorAntrean = 1, pilihanBarang, jumlahBeli, totalBarang = 0, itemIndex = 0;
    char lanjutBeli, tambahBarang;

    const int maxBarang = 5;
    string namaBarang[maxBarang];
    int jumlahBarang[maxBarang];
    int totalHarga = 0;
    int hargaBarang[maxBarang];

    do {
        cout << "\nSelamat datang di TETIMart" << endl;
        cout << "Selamat berbelanja\n" << endl;
        cout << "Antrean ke-" << nomorAntrean << endl;
        cout << "Masukkan nama pelanggan: ";;
        cin >> Nama;
        cout << "Masukkan alamat pelanggan: ";;
        cin >> Alamat;

        totalBarang = 0;
        totalHarga = 0;
        itemIndex = 0;

        do {
            if (itemIndex >= maxBarang) {
                cout << "Kapasitas Barang Penuh! Tidak bisa menambah barang lagi" << endl;
                break;
            }
            cout << "Pilih barang yang akan dibeli:" << endl;
            cout << "1. Buku = 5000\n2. Pensil = 3000\n3. Pulpen = 4000\n4. Spidol = 6000" << endl;
            cout << "Tulis angkanya saja. Misal: '1': ";
            cin >> pilihanBarang;
            cout << "Jumlah barang yang akan dibeli" << endl;
            cin >> jumlahBeli;
            totalBarang += jumlahBeli;

            switch (pilihanBarang) {
                case 1:
                    totalHarga += buku * jumlahBeli;
                    namaBarang[itemIndex] = "Buku";
                    hargaBarang[itemIndex] = buku*jumlahBeli;
                    break;
                case 2:
                    totalHarga += pensil * jumlahBeli;
                    namaBarang[itemIndex] = "Pensil";
                    hargaBarang[itemIndex] = pensil*jumlahBeli;
                    break;
                case 3:
                    totalHarga += pulpen * jumlahBeli;
                    namaBarang[itemIndex] = "Pulpen";
                    hargaBarang[itemIndex] = pulpen*jumlahBeli;
                    break;
                case 4:
                    totalHarga += spidol * jumlahBeli;
                    namaBarang[itemIndex] = "Spidol";
                    hargaBarang[itemIndex] = spidol*jumlahBeli;
                    break;
                default:
                    cout << "Pilihan tidak valid." << endl;
                    continue;
            }
            jumlahBarang[itemIndex] = jumlahBeli;

            itemIndex++;

            cout << "Apakah ingin menambah Barang? (Y/N)" << endl;
            cin >> tambahBarang;

        } while (tambahBarang == 'Y' || tambahBarang == 'y');


        cetakStruk(Nama, Alamat, nomorAntrean, namaBarang, totalBarang, jumlahBarang, itemIndex, totalHarga, hargaBarang);

        cout << "Ingin bertransaksi lagi? (Y/N) : ";
        cin >> lanjutBeli;
            
        if (lanjutBeli == 'Y' || lanjutBeli == 'y') {
            nomorAntrean++;
            }
    } while (lanjutBeli == 'Y' || lanjutBeli == 'y');
    
    cout << "Terima kasih telah menggunakan program ini." << endl;

    return 0;
}

