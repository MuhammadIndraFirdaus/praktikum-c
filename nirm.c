#include <stdio.h>

int main() {
    char nama[100];
    float nilai;

    printf("Masukkan nama mahasiswa: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan nilai mahasiswa: ");
    scanf("%f", &nilai);

    printf("\n=== Data Mahasiswa ===\n");
    printf("Nama  : %s", nama);
    printf("Nilai : %.2f\n", nilai);

    return 0;
}