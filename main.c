#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void tambah();
void kurang();
void kali();
void bagi();
void modulus();
void repeat();
float input();
double inputDouble();
int inputmenu();
int inputMenuRepeat();
int main();

double angkaPertama,angkaKedua,hasil;

float input()
{
    float choice, select;
    char enter;
    choice = scanf("%f%c", &select, &enter);
    if (choice != 2 || enter != '\n')
    {
        fflush(stdin);
        printf("Inputan salah, Masukan Angka : ");
        return input();
    }
    else
    {
        return select;
    }
}
double inputDouble()
{
    double choice, select;
    char enter;
    choice = scanf("%lf%c", &select, &enter);
    if (choice != 2 || enter != '\n')
    {
        fflush(stdin);
        printf("Inputan salah, Masukan Angka : ");
        return input();
    }
    else
    {
        return select;
    }
}
int inputmenu()
{
    int pilihan;
    char term;
    if (term = scanf("%d%c", &pilihan, &term) != 2 || pilihan < 0 || pilihan > 6 || term != '\n')
    {
        fflush(stdin);
        printf("\n\t\t\t\tInput tidak valid. Masukkan menu yang tersedia!");
        printf("\n\t\t\t-------------------------------------------------------------\n");
        return inputmenu();
    }
    else
    {
        return pilihan;
    }
}
int inputMenuRepeat()
{
    int pilihan;
    char term;
    if (term = scanf("%d%c", &pilihan, &term) != 2 || pilihan < 1 || pilihan > 2 || term != '\n')
    {
        fflush(stdin);
        printf("\n\t\t\t\tInput tidak valid. Masukkan menu yang tersedia!");
        printf("\n\t\t\t-------------------------------------------------------------\n");
        return inputmenu();
    }
    else
    {
        return pilihan;
    }
}
// Prosedur Penambahan
void tambah() {
    printf("\n\t==============================================");
    printf("\n\t||              PENAMBAHAN                  ||");
    printf("\n\t==============================================");

    double angkaPertama, angkaKedua, hasil;
    char input[256];
    printf("\n\tTolong masukkan angka pertama: ");
    angkaPertama = inputDouble();
    printf("\n\tTolong masukkan angka kedua: ");
    angkaKedua = inputDouble();

    hasil = angkaPertama + angkaKedua;
    printf("\n\t==================");
    printf("\n\t   Hasil: %.3lf  ", hasil);
    printf("\n\t==================");
}
// Prosedur Pengurangan
void kurang()
{
    printf("\n\t===============================================");
    printf("\n\t||              PENGURANGAN                  ||");
    printf("\n\t===============================================");

    double angkaPertama, angkaKedua, hasil;
    printf("\n\tTolong masukkan angka pertama: ");
    angkaPertama = inputDouble();

    printf("\n\tTolong masukkan angka kedua: ");
    angkaKedua = inputDouble();

    hasil = angkaPertama - angkaKedua;
    printf("\n\t=================");
    printf("\n\t  hasil :%.3lf   ", hasil);
    printf("\n\t=================");
}
// Prosedur Perkalian
void kali()
{
    printf("\n\t===============================================");
    printf("\n\t||              PERKALIAN                    ||");
    printf("\n\t===============================================");

    double angkaPertama, angkaKedua, hasil;
    printf("\n\tTolong masukkan angka pertama: ");
    angkaPertama = inputDouble();

    printf("\n\tTolong masukkan angka kedua: ");
    angkaKedua = inputDouble();
    hasil = angkaPertama * angkaKedua;
    printf("\n\t=================");
    printf("\n\t  hasil :%.3lf  ", hasil);
    printf("\n\t=================");
}
// Prosedur Pembagian
void bagi()
{
    printf("\n\t==============================================");
    printf("\n\t||              PEMBAGIAN                   ||");
    printf("\n\t==============================================");

    printf("\n\tTolong masukkan angka pertama: ");
    angkaPertama = inputDouble();

    printf("\n\tTolong masukkan angka kedua: ");
    angkaKedua = inputDouble();
    hasil = angkaPertama / angkaKedua;
    if(angkaKedua == 0){
        printf("\n\t=================");
        printf("\n\tTidak terdefinisi");
        printf("\n\t=================");
    }else{
        printf("\n\t=================");
        printf("\n\t  hasil :%d  ", hasil);
        printf("\n\t=================");
    }
}
// Prosedur Modulus
void modulus()
{
    printf("\n\t===============================================");
    printf("\n\t||              MODULUS                      ||");
    printf("\n\t===============================================");

    printf("\n\tTolong masukkan angka pertama: ");
    angkaPertama = inputDouble();

    printf("\n\tTolong masukkan angka kedua: ");
    angkaKedua = inputDouble();
    hasil = fmod(angkaPertama, angkaKedua);
    if(angkaKedua == 0){
        printf("\n\t=================");
        printf("\n\tTidak terdefinisi");
        printf("\n\t=================");
    }else{
        printf("\n\t=================");
        printf("\n\t  hasil :%d  ", hasil);
        printf("\n\t=================");
    }
}
// Prosedur repeat
void repeat()
{
    int code;
    printf("\n\t=================================================");
    printf("\n\t||                   MENU                      ||");
    printf("\n\t=================================================");
    printf("\n\t||Apakah anda ingin melanjutkkan program?      ||");
    printf("\n\t|| 1. Yes                                      ||");
    printf("\n\t|| 2. No                                       ||");
    printf("\n\t=================================================");
    printf("\n\tapakah ingin melanjutkan program (contoh : 1):");
    code = inputMenuRepeat();
    if (code == 1)
    {
        system("cls");
        main();
    }
    else if (code == 2)
    {
        system("cls");
        printf("\n\n\t|| TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI ||");
    }
}
int main()
{
    int code;

    printf("\n\t==============================================");
    printf("\n\t||          SELAMAT DATANG DI PROGRAM       ||");
    printf("\n\t||             KALKULATOR SEDERHANA         ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                 KELOMPOK 21              ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| ANGGOTA:                                 ||");
    printf("\n\t|| 1. Dewa Putu Ananta Prayoga              ||");
    printf("\n\t|| (2305551007)                             ||");
    printf("\n\t|| 2. I Kadek Adi Sunetra                   ||");
    printf("\n\t|| (2305551053)                             ||");
    printf("\n\t|| 3. Adinda Chandra Dimitri                ||");
    printf("\n\t|| (2305551055)                             ||");
    printf("\n\t|| 4. Elsa Amelia Tampubolon                ||");
    printf("\n\t|| (2305551061)                             ||");
    printf("\n\t|| 5. Putu Rifki Dirkayuda                  ||");
    printf("\n\t|| (2305551068)                             ||");
    printf("\n\t|| 6. Putu Devasya Aditya Widyadana         ||");
    printf("\n\t|| (2305551071)                             ||");
    printf("\n\t|| 7. I Made Tara Bujawan                   ||");
    printf("\n\t|| (2305551139)                             ||");
    printf("\n\t==============================================");

    printf("\n\t1. Tambah (+)");
    printf("\n\t2. Kurang (-)");
    printf("\n\t3. Kali   (*)");
    printf("\n\t4. Bagi   (/)");
    printf("\n\t5. Modulus(%%)");
    printf("\n\ttolong masukan kode (contoh : 1):");
    code = inputmenu();

    switch (code)
    {
    case 1:
    system("cls");
        tambah();
        break;
    case 2:
    system("cls");
        kurang();
        break;
    case 3:
    system("cls");
        kali();
        break;
    case 4:
    system("cls");
        bagi();
        break;
    case 5:
    system("cls");
        modulus();
        break;
    }
    repeat();
    return (0);
}