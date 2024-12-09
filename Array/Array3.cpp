#include <iostream>
using namespace std;

int main() {
    int arr[7]; // Deklarasi array untuk 7 angka integer
    int maxVal; // Variabel untuk menyimpan nilai maksimum

    // Meminta pengguna untuk mengisi array
    cout << "Masukkan 7 angka integer:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Inisialisasi nilai maksimum dengan elemen pertama array
    maxVal = arr[0];

    // Mencari nilai maksimum
    for (int i = 1; i < 7; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Menampilkan nilai maksimum
    cout << "\nNilai maksimum dalam array adalah: " << maxVal << endl;

    return 0;
}

