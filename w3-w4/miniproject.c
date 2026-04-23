#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    int angka;

    // Login
    printf("=== Sistem Login ===\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0) {
        printf("Login berhasil!\n\n");

        // Program ganjil genap
        printf("=== Cek Ganjil / Genap ===\n");
        printf("Masukkan sebuah angka: ");
        scanf("%d", &angka);

        if (angka % 2 == 0) {
            printf("Angka %d adalah GENAP\n", angka);
        } else {
            printf("Angka %d adalah GANJIL\n", angka);
        }

    } else {
        printf("Login gagal!\n");
    }

    return 0;
}