#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char input[100];
    double a, b, hasil;
    char op;
    double history[100];
    int count = 0;

    while (1) {
        printf("\nMasukkan ekspresi (contoh: 3+4, 2^3, sqrt(9)) atau q untuk keluar: ");
        fgets(input, sizeof(input), stdin);

        // keluar jika user ketik q
        if (input[0] == 'q')
            break;

        // cek sqrt
        if (strncmp(input, "sqrt", 4) == 0) {
            if (sscanf(input, "sqrt(%lf)", &a) == 1) {
                if (a >= 0) {
                    hasil = sqrt(a);
                    printf("Hasil = %.2lf\n", hasil);
                    history[count++] = hasil;
                } else {
                    printf("Error: akar dari bilangan negatif!\n");
                }
            } else {
                printf("Format salah! Gunakan sqrt(angka)\n");
            }
        }
        // operasi biasa: a op b
        else if (sscanf(input, "%lf %c %lf", &a, &op, &b) == 3) {
            switch(op) {
                case '+': hasil = a + b; break;
                case '-': hasil = a - b; break;
                case '*': hasil = a * b; break;
                case '/':
                    if (b != 0) hasil = a / b;
                    else {
                        printf("Error: pembagian nol!\n");
                        continue;
                    }
                    break;
                case '^': hasil = pow(a, b); break;
                default:
                    printf("Operator tidak dikenali!\n");
                    continue;
            }

            printf("Hasil = %.2lf\n", hasil);
            history[count++] = hasil;
        }
        else {
            printf("Format tidak valid!\n");
        }

        // tampilkan history singkat
        printf("History: ");
        for (int i = 0; i < count; i++) {
            printf("%.2lf ", history[i]);
        }
        printf("\n");
    }

    printf("Program selesai.\n");
    return 0;
}