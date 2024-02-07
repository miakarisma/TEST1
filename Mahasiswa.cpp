/* 
    Saya Mia Karisma Haq NIM [2102165] mengerjakan soal Latihan Praktikum-1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Memasukan library yang digunakan 
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

// Kelas Mahasiswa yang digunakan untuk merepresentasikan data Mahasiswa
class Mahasiswa
{
    // Atribut yang digunakan pada kelas mahasiswa
    private:
        string nim;
        string nama;
        string prodi;
        string fakultas;
    public:
        // Constructor
        Mahasiswa() 
        {
            
        }

        // Constructor : Overloading
        Mahasiswa(string nim, string nama, string prodi, string fakultas)
        {
            this->nim = nim;
            this->nama = nama;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }

        // Method set untuk set setiap atribut pada kelas mahasiswa
        void setNim(string nim) 
        {
            this->nim = nim;
        }

        void setNama(string nama)
        {
            this->nama = nama;
        }

        void setProdi(string prodi)
        {
            this->prodi = prodi;
        }

        void setFakultas(string fakultas)
        {
            this->fakultas = fakultas;
        }

        // Method get untuk get setiap atribut pada kelas mahasiswa
        string getNim()
        {
            return nim;
        }

        string getNama()
        {
            return nama;
        }

        string getProdi()
        {
            return prodi;
        }

        string getFakultas()
        {
            return fakultas;
        }

        // Destructor
        ~Mahasiswa() 
        {

        }
};