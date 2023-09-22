#include <stdio.h>
#include <string.h>

// Inisiasi fungsi
int jumlahR(char kunci1[], char kunci2[], int p) {
    int jumlahRotasi = 0;
    // Count perbedaan karakter
    for (int i = 0; i < p; i++) {
        int perbedaan = (kunci2[i] - kunci1[i] + 10) % 10;
        jumlahRotasi += perbedaan;
    }
    return jumlahRotasi;
}

int main() {
    char kunci1[100], kunci2[100];
    printf("Kombinasi awal: ");
    scanf("%s", kunci1);
    
    printf("Kombinasi buka: ");
    scanf("%s", kunci2);

    int p = strlen(kunci1);

    int jumlahRotasi = jumlahR(kunci1, kunci2, p);
    
    printf("Rotasi minimum %d\n", jumlahRotasi);

    return 0;
}
