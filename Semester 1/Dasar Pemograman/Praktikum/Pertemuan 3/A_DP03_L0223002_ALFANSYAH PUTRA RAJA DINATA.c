#include <stdio.h>


int main() {

    // ===== Soal Nomor 1 ===== 
    printf("===== Soal 1 : Penghitung BMI =====\n\n");

    //Variabel
    char nama[100];
    float tinggi_cm, berat;

    //Perintah Input
    printf("Masukkan Nama: ");
    scanf("%s", nama);
    while (getchar() != '\n');

    printf("Masukkan berat badan ( kg ) : ");
    scanf("%f", &berat);
    while (getchar() != '\n');

    printf("Masukkan tinggi badan ( cm ): ");
    scanf("%f", &tinggi_cm);
    while (getchar() != '\n');

    //Rumus
    float tinggi_m = tinggi_cm / 100;
    float bmi =  berat / ( tinggi_m * tinggi_m );

    // ===== Soal Nomor 2 ===== 
    printf("\n===== Soal 2 : Volume & Luas Permukaan Piramida =====\n \n");

    //Variabel
    float panjang_alas_piramida, lebar_alas_piramida, tinggi_piramida;

    //Perintah Input
    printf("Masukkan panjang alas piramida ( m ): ");
    scanf("%f", &panjang_alas_piramida);
    while (getchar() != '\n');

    printf("Masukkan lebar alas piramida( m ): ");
    scanf("%f", &lebar_alas_piramida);
    while (getchar() != '\n');

    printf("Masukkan tinggi piramida ( m ) : ");
    scanf("%f", &tinggi_piramida);
    while (getchar() != '\n');

    //Rumus
    float luas_alas_piramida = panjang_alas_piramida * lebar_alas_piramida;
    float hasil_volume_piramida = ( 1.f / 3.f ) * luas_alas_piramida * tinggi_piramida;
    float luas_permukaan_piramida = luas_alas_piramida + ( ( 2 * ((1.f / 2.f) * panjang_alas_piramida * tinggi_piramida)) + ( 2 * ((1.f / 2.f) * lebar_alas_piramida * tinggi_piramida) ) );

    // ===== Soal Nomor 3 ===== 


    // ========== Jawaban ===========
    // ===== Jawaban Nomor 1 ===== 
    printf("========== Output Soal Nomor 1 ==========\n");

    printf("%s memiliki index BMI sebesar: %.2f.\n", nama, bmi);

    if ( bmi <= 18.5){
        printf("Berat badan kurang ( Underweight ).\n");
    } else if ( bmi <= 24.9 ){
        printf("Berat badan normal.\n");
    } else if ( bmi <= 29.9 ){
        printf("Berat badan berlebih ( Overweight ).\n");
    } else {
        printf("Berat badan obesitas.\n");
    }

    // ===== Jawaban Nomor 2 ===== 
    printf("========== Output Soal Nomor 2 ==========\n");

    printf("Volume Piramida tersebut adalah : %.f m.\n", hasil_volume_piramida);
    printf("Luas Permukaan Piramida tersebut adalah : %.f m.\n", luas_permukaan_piramida);

    // ===== Jawaban Nomor 3 =====    
}