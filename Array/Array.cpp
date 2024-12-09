#include <iostream>
using namespace std;

int main() {
    int arr[5]; // Deklarasi array untuk 5 angka integer

    // Meminta pengguna untuk mengisi array
    cout << "Masukkan 5 angka integer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan elemen-elemen array
    cout << "\nElemen-elemen array yang Anda masukkan adalah:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i + 1 << ": " << arr[i] << endl;
    }

    return 0;
}

