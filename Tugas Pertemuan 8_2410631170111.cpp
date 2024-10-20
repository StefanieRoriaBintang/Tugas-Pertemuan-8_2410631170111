#include<iostream>
#include<string>

using namespace std;

struct Zodiak{
    string nama;
    int tanggalAwal;
    int bulanAwal;
    int tanggalAkhir;
    int bulanAkhir;
};

int main ()
{
    int tanggal, bulan, tahun;
    string zodiak = "Tidak diketahui";
    char ulang;

    Zodiak zodiakSign[] =
    {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

        cout << "Masukkan tanggal lahir [tgl-bln-tahun] : " << endl;
        cin >> tanggal >> bulan >> tahun;

    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiakSign[i].bulanAwal && tanggal >= zodiakSign[i].tanggalAwal) ||
            (bulan == zodiakSign[i].bulanAkhir && tanggal <= zodiakSign[i].tanggalAkhir)) {
            zodiak = zodiakSign[i].nama;
            break;
        }
    }

        cout << "Tanggal lahir anda [tgl-bln-tahun] : " << tanggal << " - " << bulan << " - " << tahun << endl;
        cout << "Zodiak anda : " << zodiak << endl;

return 0;
}
