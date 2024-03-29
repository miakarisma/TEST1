/* 
    Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Memasukan library yang digunakan 
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

// Kelas Mahasiswa yang digunakan untuk membuat tabel daftar objek mahasiswa
class Tabel
{
    // Atribut yang digunakan pada kelas Tabel
    private:
        int baris;
        int kolom;
    public:
        // Constructor
        Tabel()
        {

        }

        // Constructor : Overloading
        Tabel(int baris, int kolom)
        {
            this->baris = baris;
            this->kolom = kolom;
        }

        // Method set setiap atribut pada kelas Tabel
        void setBaris(int baris)
        {
            this->baris = baris;
        }

        void setKolom(int kolom)
        {
            this->kolom = kolom;
        }

        // Method get setiap atribut pada kelas Tabel
        int getBaris()
        {
            return baris;
        }
        
        int getKolom()
        {
            return kolom;
        }

        // Method membuat baris tabel
        void buatBaris(int baris, int kolom, string data[][4])
        {
            int i = 0, j = 0;
            int max[kolom];
            for (i = 0; i < kolom; i++) {
                max[i] = 0;
                for (j = 0; j < baris; j++) {
                    if (data[j][i].length() > max[i]) {
                        max[i] = data[j][i].length();
                    }
                }
            }

            for (i = 0; i < baris; i++) {
                for (j = 0; j < kolom; j++) {
                    for (int k = 0; k < max[j]; k++) {
                        cout << "-";
                    }
                    cout << "--";
                }
                cout << "-----" << endl;
                for (j = 0; j < kolom; j++) {
                    cout << "|" << data[i][j];
                    for (int k = 0; k < max[j] - data[i][j].length(); k++) {
                        cout << " ";
                    }
                    cout << "  ";
                }
                cout << "|" << endl;
            }
            for (j = 0; j < kolom; j++) {
                for (int k = 0; k < max[j]; k++) {
                    cout << "-";
                }
                cout << "--";
            }
            cout << "-----" << endl;
        }

        ~Tabel()
        {

        }
};