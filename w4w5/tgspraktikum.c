#include <stdio.h>
#include <stdlib.h>

// Struct karyawan
struct Karyawan {
    char nama[50];
    int umur;
    float gaji;
};

int main() {
    int n;

    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &n);

    // Alokasi memori dinamis
    struct Karyawan *kar = (struct Karyawan*) malloc(n * sizeof(struct Karyawan));

    // Input data
    for(int i = 0; i < n; i++) {
        printf("\nKaryawan ke-%d\n", i+1);

        printf("Nama  : ");
        scanf("%s", (kar + i)->nama);

        printf("Umur  : ");
        scanf("%d", &(kar + i)->umur);

        printf("Gaji  : ");
        scanf("%f", &(kar + i)->gaji);
    }

    // Output data
    printf("\nData Karyawan:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. Nama: %s | Umur: %d | Gaji: %.2f\n",
               i+1,
               (kar + i)->nama,
               (kar + i)->umur,
               (kar + i)->gaji);
    }

    // Membebaskan memori
    free(kar);

    return 0;
}