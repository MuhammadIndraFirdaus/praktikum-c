#include <stdio.h>
#include <math.h>

int main() {
    int pilihan;
    double a, b, hasil;
    double history[100];
    int count = 0;

    do {
        printf("\n=== KALKULATOR ===\n");
        printf("1. Penjumlahan (+)\n");
        printf("2. Pengurangan (-)\n");
        printf("3. Perkalian (*)\n");
        printf("4. Pembagian (/)\n");
        printf("5. Pangkat (^)\n");
        printf("6. Akar (sqrt)\n");
        printf("7. Lihat History\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                hasil = a + b;
                printf("Hasil = %.2lf\n", hasil);
                history[count++] = hasil;
                break;

            case 2:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                hasil = a - b;
                printf("Hasil = %.2lf\n", hasil);
                history[count++] = hasil;
                break;

            case 3:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                hasil = a * b;
                printf("Hasil = %.2lf\n", hasil);
                history[count++] = hasil;
                break;

            case 4:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0) {
                    hasil = a / b;
                    printf("Hasil = %.2lf\n", hasil);
                    history[count++] = hasil;
                } else {
                    printf("Error: Tidak bisa dibagi nol!\n");
                }
                break;

            case 5:
                printf("Masukkan angka dan pangkat: ");
                scanf("%lf %lf", &a, &b);
                hasil = pow(a, b);
                printf("Hasil = %.2lf\n", hasil);
                history[count++] = hasil;
                break;

            case 6:
                printf("Masukkan angka: ");
                scanf("%lf", &a);
                if (a >= 0) {
                    hasil = sqrt(a);
                    printf("Hasil = %.2lf\n", hasil);
                    history[count++] = hasil;
                } else {
                    printf("Error: Tidak bisa akar dari bilangan negatif!\n");
                }
                break;

            case 7:
                printf("\n=== HISTORY ===\n");
                if (count == 0) {
                    printf("Belum ada perhitungan.\n");
                } else {
                    for (int i = 0; i < count; i++) {
                        printf("%d. %.2lf\n", i + 1, history[i]);
                    }
                }
                break;

            case 0:
                printf("Program selesai.\n");
                break;

            default:
                printf("Pilihan tidak valid!\n");
        }

    } while (pilihan != 0);

    return 0;
}