#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[100];
    char NIM[20];
    char prodi[50];
    char universitas[50];
    char alamat[100];
};

int main() {
    int jumlahMahasiswa;

    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    getchar(); // Mengambil newline setelah scanf

    struct Mahasiswa mahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMasukkan data mahasiswa ke-%d\n", i + 1);

        printf("Nama: ");
        fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
        mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = '\0'; // Hapus karakter newline

        printf("NIM: ");
        fgets(mahasiswa[i].NIM, sizeof(mahasiswa[i].NIM), stdin);
        mahasiswa[i].NIM[strcspn(mahasiswa[i].NIM, "\n")] = '\0';

        printf("Program Studi: ");
        fgets(mahasiswa[i].prodi, sizeof(mahasiswa[i].prodi), stdin);
        mahasiswa[i].prodi[strcspn(mahasiswa[i].prodi, "\n")] = '\0';

        printf("Universitas: ");
        fgets(mahasiswa[i].universitas, sizeof(mahasiswa[i].universitas), stdin);
        mahasiswa[i].universitas[strcspn(mahasiswa[i].universitas, "\n")] = '\0';

        printf("Alamat: ");
        fgets(mahasiswa[i].alamat, sizeof(mahasiswa[i].alamat), stdin);
        mahasiswa[i].alamat[strcspn(mahasiswa[i].alamat, "\n")] = '\0';
    }

    // Menampilkan semua data mahasiswa yang telah diinput
    printf("\nData seluruh mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama: %s\n", mahasiswa[i].nama);
        printf("NIM: %s\n", mahasiswa[i].NIM);
        printf("Program Studi: %s\n", mahasiswa[i].prodi);
        printf("Universitas: %s\n", mahasiswa[i].universitas);
        printf("Alamat: %s\n", mahasiswa[i].alamat);
    }

    return 0;
}
