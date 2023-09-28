#include <stdio.h>
#include <math.h>


int main() {

    // ===== Soal Nomor 1 ===== 
    printf("===== Soal 1 : Penghitung Index BMI =====\n\n");

    //Variabel
    char nama[100];
    float tinggi_cm, berat;

    //Perintah Input
    printf("Masukkan Nama: ");
    scanf("%s", nama);
    while (getchar() != '\n');

    printf("Masukkan berat badan %s ( kg ) : ", nama);
    scanf("%f", &berat);
    while (getchar() != '\n');

    printf("Masukkan tinggi badan %s ( cm ): ", nama);
    scanf("%f", &tinggi_cm);
    while (getchar() != '\n');

    //Rumus
    float tinggi_m = tinggi_cm / 100;
    float bmi =  berat / ( tinggi_m * tinggi_m );

    // ===== Soal Nomor 2 ===== 
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
    float hasil_volume_piramida = ( 1.f / 3.f ) * luas_alas_piramida * tinggi_piramida;
    float luas_permukaan_piramida = luas_alas_piramida + ( ( 2 * ((1.f / 2.f) * panjang_alas_piramida * tinggi_piramida)) + ( 2 * ((1.f / 2.f) * lebar_alas_piramida * tinggi_piramida) ) );

    // ===== Soal Nomor 3 ===== 
    printf("\n===== Soal 3 : Maximal Tinggi Lemparan =====\n\n");

    //Variabel
    float va, vr;
    float g = 9.18;

    //Perintah Input
    printf("Masukkan kecepatan lemparan awal Andi ( m/s ) : ");
    scanf("%f", &va);
    while (getchar() != '\n');

    printf("Masukkan kecepatan lemparan awal Roni ( m/s ) : ");
    scanf("%f", &vr);
    while (getchar() != '\n');

    //Rumus
    float tinggiMaxAndi = ( va * va ) / ( 2.f * g );
    float tinggiMaxRoni = ( va * vr ) / ( 2.f * g );

    // ===== Soal Nomor 4 =====
    printf("\n===== Soal 4 : Waktu Lemparan Jatuh =====\n\n");
    printf("Abaikan input, sudah terisi di Soal Nomor 3.\n");

    //Rumus
    float waktuAndi = sqrt((2 * tinggiMaxAndi) / g);
    float waktuRoni = sqrt((2 * tinggiMaxRoni) / g);

    // ===== Soal Nomor 5 =====
    printf("\n===== Soal 5 : Mencegah Tabrakan Mobil Pak Dengklek =====\n\n");

    //Variabel
    float vo, kecepatan, perlambatan;
    const float jarak = 50.f; 

    //Perintah Input

    printf("Masukkan kecepatan awal mobil Pak Dengklek (km/jam): ");
    scanf("%f", &vo);
    while (getchar() != '\n');

    //Rumus
    kecepatan = vo * (1000.f / 3600.f);
    perlambatan = (kecepatan * kecepatan / (2.f * jarak));

    // ========== Jawaban ===========
    // ===== Jawaban Nomor 1 ===== 
    printf("\n========== Output Soal Nomor 1 ==========\n\n");

    printf("%s memiliki index BMI sebesar: %.2f point.\n", nama, bmi);

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
    printf("\n========== Output Soal Nomor 2 ==========\n\n");

    printf("Volume Piramida yang dihitung Pak Dengklek sebesar %.2f m.\n", hasil_volume_piramida);
    printf("Luas Permukaan Piramida yang dihitung Pak Dengklek sebesar %.2f m.\n", luas_permukaan_piramida);

    // ===== Jawaban Nomor 3 =====   
    printf("\n========== Output Soal Nomor 3 ==========\n\n");

    printf("Maximal tinggi lemparan Andi setinggi %.2f m.\n", tinggiMaxAndi);
    printf("Maximal tinggi lemparan Roni setinggi %.2f m.\n", tinggiMaxRoni);

    // ===== Jawaban Nomor 4 =====
    printf("\n========== Output Soal Nomor 4 ==========\n\n");

    printf("Waktu lemparan Andi sampai ketanah akan terjadi selama %.2f detik.\n",waktuAndi);
    printf("Waktu lemparan Roni sampai ketanah akan terjadi selama  %.2f detik.\n", waktuRoni);

    // ===== Jawaban Nomor 5 =====
    printf("\n========== Output Soal Nomor 5 ==========\n\n");

    printf("Perlambatan yang diperlukan Pak Dengklek sebesar %.2f m/s^2.\n", perlambatan);
}