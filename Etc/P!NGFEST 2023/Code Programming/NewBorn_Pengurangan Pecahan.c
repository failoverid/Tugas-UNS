#include <stdio.h>

// Fungsi
int pp(int a, int b) {
    if (b == 0) {
        return a;
    }
    return pp(b, a % b);
}

int main() {
    int P, Q, R, S;
    
    printf("Masukkan P Q: ");
    scanf("%d %d", &P, &Q);
    
    printf("Masukkan R S: ");
    scanf("%d %d", &R, &S);
    
    // Perhitungan X Y
    int X = P * S - Q * R;
    int Y = Q * S;
    int hasil = pp(X, Y);
    
    // Penyederhanaan
    X /= hasil;
    Y /= hasil;
    
    printf("Hasil: %d %d\n", X, Y);
    
    return 0;
}
