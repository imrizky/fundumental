#include <stdio.h>

// Fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari) {
    // Menggunakan konstanta PI untuk akurasi lebih baik
    const float PI = 3.14159;
    return 2 * PI * jariJari;
}

int main() {
    float jariJari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi dan menyimpan hasilnya dalam variabel
    float keliling = hitungKelilingLingkaran(jariJari);

    printf("Keliling lingkaran adalah: %.2f\n", keliling);

    return 0;
}