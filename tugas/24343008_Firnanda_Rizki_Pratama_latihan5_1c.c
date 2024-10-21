#include <stdio.h>

// fungsi untuk menghitung faktorial secara rekrusif 
int hitungFaktorial(int n) {
    if (n == 0 || n == 1) { // Removed the semicolon after the if statement
        return 1;
    } else {
        return n * hitungFaktorial(n - 1); // Fixed the function name casing
    }
}

int main() {
    int n;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n); // Fixed the syntax for scanf

    // memanggil fungsi dan menampilkan hasil 
    int faktorial = hitungFaktorial(n); // Fixed the function name casing
    printf("Faktorial dari %d adalah %d\n", n, faktorial);

    return 0;
}
