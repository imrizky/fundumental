#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int angkaTebakan, tebakan, kesempatan, mainLagi, level, skorTertinggi = 0, jumlahTebakan;
    char pilihan;

    // Menginisialisasi generator angka acak
    srand(time(0));

    do
    {
        // Pilih level kesulitan
        printf("Pilih level kesulitan:\n");
        printf("1. Mudah (1-50)\n");
        printf("2. Normal (1-100)\n");
        printf("3. Sulit (1-200)\n");
        printf("Masukkan pilihan level (1-3): ");
        scanf("%d", &level);

        switch (level)
        {
        case 1:
            angkaTebakan = rand() % 50 + 1;
            break;
        case 2:
            angkaTebakan = rand() % 100 + 1;
            break;
        case 3:
            angkaTebakan = rand() % 200 + 1;
            break;
        default:
            printf("Pilihan tidak valid, default ke level normal.\n");
            angkaTebakan = rand() % 100 + 1;
        }

        kesempatan = 5;
        jumlahTebakan = 0;
        printf("Selamat datang di permainan Tebak Angka!\n");
        printf("Saya telah memilih sebuah angka. Anda memiliki %d kesempatan untuk menebaknya.\n", kesempatan);

        // Mulai permainan dengan struktur kontrol loop
        while (kesempatan > 0)
        {
            printf("\nMasukkan tebakan Anda: ");
            scanf("%d", &tebakan);
            jumlahTebakan++;

            // Struktur kontrol if-else untuk mengevaluasi tebakan
            if (tebakan > angkaTebakan)
            {
                printf("Tebakan Anda terlalu tinggi!");
            }
            else if (tebakan < angkaTebakan)
            {
                printf("Tebakan Anda terlalu rendah!");
            }
            else
            {
                printf("Selamat! Anda menebak dengan benar!\n");

                // Cek apakah jumlah tebakan lebih sedikit dari skor tertinggi
                if (skorTertinggi == 0 || jumlahTebakan < skorTertinggi)
                {
                    skorTertinggi = jumlahTebakan;
                    printf("Skor tertinggi baru! Anda menebak dengan %d tebakan.\n", jumlahTebakan);
                }
                else
                {
                    printf("Anda menebak dengan %d tebakan.\n", jumlahTebakan);
                }
                break;
            }

            kesempatan--;
            printf("Kesempatan tersisa: %d\n", kesempatan);
        }

        // Evaluasi akhir jika gagal menebak dalam 5 kesempatan
        if (kesempatan == 0)
        {
            printf("Maaf, Anda kehabisan kesempatan. Angka yang benar adalah %d.\n", angkaTebakan);
        }

        // Opsi untuk bermain lagi menggunakan switch
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &pilihan);

        switch (pilihan)
        {
        case 'y':
        case 'Y':
            mainLagi = 1;
            break;
        case 'n':
        case 'N':
            mainLagi = 0;
            printf("Terima kasih telah bermain!\n");
            break;
        default:
            printf("Pilihan tidak valid, keluar dari permainan.\n");
            mainLagi = 0;
            break;
        }

    } while (mainLagi);

    return 0;
}