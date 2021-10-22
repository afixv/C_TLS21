#include <iostream>
#include <string>

using namespace std;

int main () {
    // Deklarasi Variabel
    string nama;
    float semester, sisaSemester, targetIpk, IpSemester, jumlahIpSekarang, ipkSekarang, hasil;

    // Judul
    cout << "===================================================" << endl;
    cout << "         Program untuk Menghitung Perkiraan        "<< endl;
    cout << "IP perSemester Agar Mencapai Target yang Diinginkan" << endl;
    cout << "===================================================" << endl;

    // Meminta Input Kepada User
    cout << "Masukkan Nama Anda: ";
    getline (cin, nama);
    cout << "Masukkan Semester Anda Sekarang: ";
    cin >> semester;
    cout << "Masukkan Target IPK Anda Saat Lulus Nanti: ";
    cin >> targetIpk;

    // Menghitung Sisa Semester yang Belum Dijalani
    sisaSemester = 8 - semester;
    cout << "===================================================" << endl;

    // Iterasi Untuk Memasukan IP per Semester yang sudah dijalani
    for (int i = 1; i <= semester; i++) {
        cout << "Masukkan IP anda semester " << i << ": ";
        cin >> IpSemester;
        jumlahIpSekarang += IpSemester;
    }

    // Rumus didapat dari IP Tujuan = (jumlahIPSekarang + sisa semester * hasil) / 8
    // dengan 8 merupakan total semster yang akan ditempuh.
    hasil = (8 * targetIpk - jumlahIpSekarang) / sisaSemester;

    // Menghitung IPK pada semester yang telah dijalani
    ipkSekarang = jumlahIpSekarang / semester;

    // Menampilkan Data yang Telah Diinputkan User
    cout << "===================================================" << endl;
    cout << "Nama\t\t\t: " << nama << endl;
    cout << "Semester\t\t: " << semester << endl;
    cout << "IPK Anda Sekarang\t: " << ipkSekarang << endl;
    cout << "Target IPK Saat Lulus\t: " << targetIpk << endl;
    cout << "===================================================" << endl;

    // Pengkondisian Menentukan Apakah Target Bisa Dicapai atau Tidak.
    if (hasil <= 4) {
       cout << "IP yang Harus Anda Raih Setiap Semesternya adalah " << hasil << endl; 
    } else {
        cout << "Target IPK anda tidak mungkin untuk dicapai.";
    }
    return 0;
}