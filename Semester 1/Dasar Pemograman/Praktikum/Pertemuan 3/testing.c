#include <stdio.h>

int main() {
    float kecepatan, kecepatan_km, perlambatan;
    const float jarak = 50.f; 

    printf("Masukkan kecepatan awal mobil Pak Dengklek (km/jam): ");
    scanf("%f", &kecepatan_km);

    //Rumus
    kecepatan = kecepatan_km * (1000.f / 3600.f);
    perlambatan = (kecepatan * kecepatan / (2.f * jarak));

    printf("Perlambatan yang diperlukan Pak Dengklek sebesar %.2f m/s^2.\n", perlambatan);

    return 0;
}
