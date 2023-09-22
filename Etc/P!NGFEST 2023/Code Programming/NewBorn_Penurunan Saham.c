#include <stdio.h>

int main() {
    int n;
    printf("Jumlah elemen dalam array: ");
    scanf("%d", &n);

    int array[n];
    printf("Masukkan isi array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initiate
    int ppl = 1;
    int panjang = 1;

    // Logic Hitung
    for (int i = 1; i < n; i++) {
        if (array[i] < array[i - 1]) {
            panjang++;
        } else {
            panjang = 1;
        }

        if (panjang > ppl) {
            ppl = panjang;
        }
    }

    printf("Hasil: %d\n", ppl);

    return 0;
}
