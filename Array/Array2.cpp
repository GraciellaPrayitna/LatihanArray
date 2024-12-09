#include <iostream>
using namespace std;

int main() {
    int arr[10]; // Deklarasi array untuk 10 angka integer
    int sum = 0; // Variabel untuk menyimpan jumlah elemen

    // Meminta pengguna untuk mengisi array
    cout << "Masukkan 10 angka integer:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menjumlahkan semua elemen array
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    // Menampilkan hasil penjumlahan
    cout << "\nJumlah semua elemen dalam array adalah: " << sum << endl;

    return 0;
}

