#include <stdio.h>
#include <math.h>
   
    int main(){
    
    printf("\n===== Soal 2 : Volume & Luas Permukaan Piramida Pak Dengklek =====\n \n");

    //Variabel
    float panjang_alas_piramida, lebar_alas_piramida, tinggi_piramida;

    //Perintah Input
    printf("Masukkan panjang alas Piramida ( m ): ");
    scanf("%f", &panjang_alas_piramida);
    while (getchar() != '\n');

    printf("Masukkan lebar alas Piramida ( m ): ");
    scanf("%f", &lebar_alas_piramida);
    while (getchar() != '\n');

    printf("Masukkan tinggi Piramida ( m ) : ");
    scanf("%f", &tinggi_piramida);
    while (getchar() != '\n');

    //Rumus
    float luas_alas_piramida = panjang_alas_piramida * lebar_alas_piramida;
    float sisi_miring_lebar = sqrt( ( ( lebar_alas_piramida / 2 ) * ( lebar_alas_piramida / 2 ) ) + ( tinggi_piramida * tinggi_piramida ) );
    float sisi_miring_panjang = sqrt( ( ( panjang_alas_piramida / 2 ) * ( panjang_alas_piramida / 2 ) ) + ( tinggi_piramida * tinggi_piramida ) );

    float hasil_volume_piramida = ( 1.f / 3.f ) * luas_alas_piramida * tinggi_piramida;
    float luas_permukaan_piramida = luas_alas_piramida + ( ( 2 * ((1.f / 2.f) * panjang_alas_piramida * sisi_miring_panjang)) + ( 2 * ((1.f / 2.f) * lebar_alas_piramida * sisi_miring_lebar) ) );

    printf("\n========== Output Soal Nomor 2 ==========\n\n");

    printf("Volume Piramida yang dihitung Pak Dengklek sebesar %.2f m.\n", hasil_volume_piramida);
    printf("Luas Permukaan Piramida yang dihitung Pak Dengklek sebesar %.2f m.\n", luas_permukaan_piramida);

    }