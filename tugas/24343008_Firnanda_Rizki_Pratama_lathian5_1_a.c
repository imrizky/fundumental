#include <stdio.h> 

// fungsi untuk menghitung luas persegi panjang
int hitungLuasPersegiPanjang(int panjang, int lebar) {
    return panjang * lebar;
}

int main() {
    int panjang, lebar; // Declare the variables with the correct type

    printf("Masukan panjang: ");
    scanf("%d", &panjang);
    printf("Masukan lebar: ");
    scanf("%d", &lebar); // Corrected the syntax error

    // memanggil fungsi dan menampilkan hasil
    int luas = hitungLuasPersegiPanjang(panjang, lebar); // Fixed variable name casing
    printf("Luas persegi panjang adalah: %d\n", luas);

    return 0;
}
