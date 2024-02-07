/* 
    Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Memasukan library yang digunakan 
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"
#include "Tabel.cpp"

// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);
	cin.tie();
    list<Mahasiswa> daftarMahasiswa; // List daftar Mahasiswa yang digunakan untuk menyimpan sekumpulan objek mahasiswa
    string nim, nama, prodi, fakultas; // String untuk menyimpan nim, nama, prodi serta fakultas dari masukan user
    int i = 0, ketemu = 0; // Variabel untuk kontrol perulangan
    int menu = 0; // Variabel untuk menu yang dipilih user

    // Perulangan untuk memproses setiap fitur yang diinginkan user
    while (menu != 5)
    {
        // Tampilan Dashboard
        cout << "+====================================================+" << endl;
        cout << "+   SELAMAT DATANG DI SISTEM INFORMASI MAHASISWA     +" << endl;
        cout << "+====================================================+" << endl;
        cout << "Berikut fitur-fitur yang tersedia pada layanan kami :" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Ubah Data Mahasiswa" << endl;
        cout << "3. Hapus Data Mahasiswa" << endl;
        cout << "4. Tampilkan Daftar Mahasiswa" << endl;
        cout << "5. Keluar" << endl << endl;
        cout << "Fitur yang dipilih : ";
        cin >> menu;

        // Jika menu yang dipilih tambah data Mahasiswa maka lakukan instansiasi objek mahasiswa lalu masukan ke dalam list daftarMahasiswa
        if (menu == 1)
        {
            // Meminta masukan dari user untuk data mahasiswa
            cout << endl << "NIM : ";
            cin >> nim;
            cout << "Nama : ";
            cin >> nama;
            cout << "Prodi : ";
            cin >> prodi;
            cout << "Fakultas : ";
            cin >> fakultas;

            // Pembuatan objek mahasiswa
            Mahasiswa mhs(nim, nama, prodi, fakultas);
            // Menambah objek mahasiswa ke dalam list
            daftarMahasiswa.push_back(mhs);
            cout << "Data berhasil ditambahkan!" << endl << endl;
        }
        // Jika menu yang dipilih ubah data Mahasiswa maka lakukan pengubahan data objek mahasiswa dengan method set berdasarkan nim masukan user
        else if (menu == 2)
        {
            // Meminta masukan NIM dari user untuk data mahasiswa yang ingin diubah
            cout << endl << "Silahkan isi NIM dari mahasiswa yang ingin diubah datanya!" << endl;
            cout << "NIM : ";
            cin >> nim;
            cout << endl;

            // Proses pengubahan data pada objek mahasiswa dengan NIM masukan user
            i = 0, ketemu = 0;
            list<Mahasiswa>::iterator it = daftarMahasiswa.begin();
            while (ketemu == 0 && it != daftarMahasiswa.end())
            {
                if (it->getNim() == nim)
                {
                    cout << "Mahasiswa ditemukan. Silahkan masukan data baru!" << endl;
                    cout << "Nama : ";
                    cin >> nama;
                    cout << "Prodi : ";
                    cin >> prodi;
                    cout << "Fakultas : ";
                    cin >> fakultas;
                    it->setNim(nim);
                    it->setNama(nama);
                    it->setProdi(prodi);
                    it->setFakultas(fakultas);
                    ketemu = 1;
                }
                it++;
            }
            
            // Pesan pemberitahuan
            if (ketemu != 0) cout << "Data berhasil diubah!" << endl << endl;
            else cout << "Data tidak ditemukan!" << endl << endl;
        }
        // Jika menu yang dipilih hapus data Mahasiswa maka lakukan penghapusan data objek mahasiswa berdasarkan nim masukan user
        else if (menu == 3)
        {
            // Meminta masukan dari user untuk data mahasiswa yang ingin dihapus
            cout << endl << "Silahkan masukan NIM dari mahasiswa yang ingin dihapus datanya!" << endl;
            cout << "NIM : ";
            cin >> nim;

            // Proses penghapusan data objek mahasiswa dengan NIM masukan user
            ketemu = 0;
            list<Mahasiswa>::iterator it = daftarMahasiswa.begin();
            while (ketemu == 0 && it != daftarMahasiswa.end())
            {
                if (it->getNim() == nim)
                {
                    daftarMahasiswa.erase(it);
                    ketemu = 1;
                }
                it++;
            }

            // Pesan pemberitahuan
            if (ketemu != 0) cout << "Data berhasil dihapus!" << endl << endl;
            else cout << "Data tidak ditemukan!" << endl << endl;
        }
        // Jika menu yang dipilih tampilkan data daftar Mahasiswa maka lakukan instansiasi objek tabel untuk menampilkan daftar mahasiswa
        else if (menu == 4)
        {
            Tabel tab; // Instansiasi objek tabel 
            string arrstr[daftarMahasiswa.size()+1][4]; // Array yang berisi list daftar Mahasiswa

            // Pengisian judul setiap kolom pada tabel
            arrstr[0][0] = "NIM";
            arrstr[0][1] = "Nama";
            arrstr[0][2] = "Program Studi";
            arrstr[0][3] = "Fakultas";

            // Proses pengisian setiap elemen array
            i = 0;
            for(list<Mahasiswa>::iterator it = daftarMahasiswa.begin(); it != daftarMahasiswa.end(); it++)
            {
                arrstr[i+1][0] = it->getNim();
                arrstr[i+1][1] = it->getNama();
                arrstr[i+1][2] = it->getProdi();
                arrstr[i+1][3] = it->getFakultas();
                i++;
            }

            // Menampilkan Daftar Data Mahasiswa
            cout << endl << "        Daftar Data Mahasiswa       " << endl;
            tab.buatBaris(daftarMahasiswa.size()+1, 4, arrstr);
            cout << endl;
        }
        // Jika menu yang dipilih keluar maka tampilkan pesan pemberitahuan
        else if (menu == 5)
        {
            cout << endl << "TERIMA KASIH TELAH MENGGUNAKAN SISTEM KAMI <3" << endl;
        }
        // Jika menu yang dipilih tidak tersedia pada fitur sistem maka tampilkan error handling
        else
        {
            cout << endl << "Maaf, fitur yang anda pilih tidak tersedia!" << endl;
        }
    }
    return 0;
}