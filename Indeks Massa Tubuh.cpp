#include <iostream>
using namespace std;

int main() {
    char jenisKelamin;
    double beratBadan, tinggiBadan_cm, indeksMassaTubuh;
    int usia;
    
    // Input jenis kelamin
    cout << "Pilih jenis kelamin (L/P): ";
    cin >> jenisKelamin;

    // Input berat badan dalam kilogram
    cout << "Masukkan berat badanmu dalam kilogram: ";
    cin >> beratBadan;

    // Input tinggi badan dalam centimeter
    cout << "Masukkan tinggi badanmu dalam centimeter: ";
    cin >> tinggiBadan_cm;

    // Input usia dalam tahun
    cout << "Masukkan usiamu dalam tahun: ";
    cin >> usia;

    // Konversi tinggi badan dalam centimeter ke meter
    double tinggiBadan_m = tinggiBadan_cm / 100.0;

    // Kalkulasi BMI atau Indeks Massa Tubuh
    indeksMassaTubuh = beratBadan / (tinggiBadan_m * tinggiBadan_m);

    // Pengecekan dan Pemeriksaan jika BMI atau Indeks Massa Tubuh Check sudah masuk dalam jangkauan ideal berdasarkan jenis kelamin dan usia
    // Jika jenis kelamin laki-laki, dilakukan pemeriksaan Indeks Massa Tubuh dan disesuaikan dengan kategori idealnya
    if (jenisKelamin == 'L') {
        if (usia < 30) { //jika laki-laki dengan umur di bawah 30:
            if (indeksMassaTubuh >= 18.5 && indeksMassaTubuh <= 24.9) {
                cout << "Berat badanmu sudah ideal untuk usiamu. Pertahankan dan tetap atur pola makan dan jangan lupa untuk rutin berolahraga." << endl;
                cout << "Untuk tetap bugar, targetkan untuk minum air putih sebanyak " << beratBadan / 20.0 << " liter per harinya.";
            } else if (indeksMassaTubuh < 18.5) { 
                cout << "Berat badanmu kurang dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk menambah berat badan, dengan melakukan surplus kalori, dan melakukan latihan beban.";
            } else {
                cout << "Berat badanmu melebihi dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk mengurangi berat badan, dengan melakukan defisit kalori, dan melakukan latihan kardio.";
            }
        } else { //jika laki-laki dengan umur di atas 30
            // Penyesuaian kembali Indeks Massa Tubuh yang ideal untuk jangkauan pria yang lebih tua dari 30 tahun
            if (indeksMassaTubuh >= 19.0 && indeksMassaTubuh <= 25.4) { 
                cout << "Berat badanmu sudah ideal untuk usiamu. Pertahankan dan tetap atur pola makan dan jangan lupa untuk rutin berolahraga" << endl;
                cout << "Untuk tetap bugar, targetkan untuk minum air putih sebanyak " << beratBadan / 20.0 << " liter per harinya.";
            } else if (indeksMassaTubuh < 19.0) {
                cout << "Berat badanmu kurang dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk menambah berat badan, dengan melakukan surplus kalori, dan melakukan latihan beban.";
            } else {
                cout << "Berat badanmu melebihi dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk mengurangi berat badan, dengan melakukan defisit kalori, dan melakukan latihan kardio.";
            }
        }
    // Jika jenis kelamin perempuan, dilakukan pemeriksaan Indeks Massa Tubuh dan disesuaikan dengan kategori idealnya    
    } else if (jenisKelamin == 'P') {
        if (usia < 30) { //jika perempuan dengan umur di bawah 30:
            if (indeksMassaTubuh >= 18.5 && indeksMassaTubuh <= 24.9) {
                cout << "Berat badanmu sudah ideal untuk usiamu. Pertahankan dan tetap atur pola makan dan jangan lupa untuk rutin berolahraga" << endl;
                cout << "Untuk tetap bugar, targetkan untuk minum air putih sebanyak " << beratBadan / 20.0 << " liter per harinya.";
            } else if (indeksMassaTubuh < 18.5) {
                cout << "Berat badanmu kurang dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk menambah berat badan, dengan melakukan surplus kalori, dan melakukan latihan beban.";
            } else {
                cout << "Berat badanmu melebihi dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk mengurangi berat badan, dengan melakukan defisit kalori, dan melakukan latihan kardio.";
            }
        } else { //jika perempuan dengan umur di atas 30
            // Penyesuaian kembali Indeks Massa Tubuh yang ideal untuk jangkauan wanita yang lebih tua dari 30 tahun
            if (indeksMassaTubuh >= 19.3 && indeksMassaTubuh <= 26.0) {
                cout << "Berat badanmu sudah ideal untuk usiamu. Pertahankan dan tetap atur pola makan dan jangan lupa untuk rutin berolahraga" << endl;
                cout << "Untuk tetap bugar, targetkan untuk minum air putih sebanyak " << beratBadan / 20.0 << " liter per harinya.";
            } else if (indeksMassaTubuh < 19.3) {
                cout << "Berat badanmu kurang dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk menambah berat badan, dengan melakukan surplus kalori, dan melakukan latihan beban.";
            } else {
                cout << "Berat badanmu melebihi dari berat badan ideal untuk usiamu." << endl;
                cout << "Sebaiknya pertimbangkan untuk mengurangi berat badan, dengan melakukan defisit kalori, dan melakukan latihan kardio.";
            }
        }
    // Jika input atau masukan jenis kelamin salah atau invalid, maka akan diingatkan atau diberitahu untuk mengulang pemrograman supaya input atau masukan  jenis kelamin dengan tepat
    } else {
        cout << "Jenis kelamin yang anda masukkan invalid, silahkan mulai ulang program dengan memberikan masukan jenis kelamin dengan benar." << endl; 
        cout << "Jika laki-laki tuliskan L dengan huruf kapital, jika perempuan tuliskan P dengan huruf kapital." << endl;
    }

    return 0;
}
