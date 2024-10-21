#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int bilangan, sisaBagi;

    // Input bilangan
    printf("Bilangan ganjil atau genap\n");
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);  // Perbaikan di sini

    // Proses penghitungan sisa bagi
    sisaBagi = bilangan % 2;

    // Proses pengecekan dengan pengambilan keputusan if/else
    if (sisaBagi == 1) {
        printf("Bilangan %d merupakan bilangan ganjil.\n", bilangan);
    } else {
        printf("Bilangan %d merupakan bilangan genap.\n", bilangan);
    }

    return 0;
}
