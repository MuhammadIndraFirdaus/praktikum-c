#include <stdio.h>

// Fungsi untuk sorting (bubble sort)
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];

    // Input data
    printf("Masukkan %d bilangan:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Hitung mean
    float sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    float mean = sum / n;

    // Sorting untuk median dan mode
    sort(arr, n);

    // Hitung median
    float median;
    if (n % 2 == 0) {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        median = arr[n/2];
    }

    // Hitung mode
    int mode = arr[0], maxCount = 1;
    int current = arr[0], count = 1;

    for (i = 1; i < n; i++) {
        if (arr[i] == current) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                mode = current;
            }
            current = arr[i];
            count = 1;
        }
    }

    // Cek terakhir
    if (count > maxCount) {
        maxCount = count;
        mode = current;
    }

    // Output hasil
    printf("\nMean   = %.2f\n", mean);
    printf("Median = %.2f\n", median);

    if (maxCount > 1)
        printf("Mode   = %d (muncul %d kali)\n", mode, maxCount);
    else
        printf("Mode   = Tidak ada (semua unik)\n");

    return 0;
}