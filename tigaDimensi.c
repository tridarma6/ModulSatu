#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PHI 3.14

void open();
void close();
void end();
int repeat();
void volumeDanLuasPermukaanTabung();
void volumeDanLuasPermukaanBola();
void volumeDanLuasPermukaanLimasSegiEmpat();
void volumeDanLuasPermukaanPrismaSegitiga();
void volumeDanLuasPermukaanKerucut();
float input();
int inputmenu();
int inputMenuRepeat();


int main(){

    int kode;

    open();

    printf("\n\t==============================================");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||                BANGUN DATAR              ||");
    printf("\n\t||                 KELOMPOK 9               ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Bangun Datar:                     ||");
    printf("\n\t|| 1. TABUNG                                ||");
    printf("\n\t|| 2. BOLA                                  ||");
    printf("\n\t|| 3. LIMAS SEGIEMPAT                       ||");
    printf("\n\t|| 4. PRISMA SEGITIGA                       ||");
    printf("\n\t|| 5. KERUCUT                               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan kode bangun datar: ");

    kode = inputmenu();

    switch (kode)
    {
    case 1:
        volumeDanLuasPermukaanTabung();
        break;
    case 2:
        volumeDanLuasPermukaanBola();
        break;
    case 3:
        volumeDanLuasPermukaanLimasSegiEmpat();
        break;
    case 4:
        volumeDanLuasPermukaanPrismaSegitiga();
        break;
    case 5:
        volumeDanLuasPermukaanKerucut();
        break;
    default:
        printf("Anda salah memilih kode!!!");
        break;
    }
    repeat();
    return(0);
}
void open(){

    printf("\n\t==============================================");
    printf("\n\t||          SELAMAT DATANG DI PROGRAM       ||");
    printf("\n\t||    MENGHITUNG VOLUME & LUAS PERMUKAAN    ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                 KELOMPOK 9               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| ANGGOTA:                                 ||");
    printf("\n\t|| 1. Ni Putu Marsya Suryawati              ||");
    printf("\n\t|| (2305551026)                             ||");
    printf("\n\t|| 2. Nyoman Tri Darma Wahyudi              ||");
    printf("\n\t|| (2305551052)                             ||");
    printf("\n\t|| 3. Zhabian Razka Ferano                  ||");
    printf("\n\t|| (2305551067)                             ||");
    printf("\n\t|| 4. Made Septino Budi Putrawan            ||");
    printf("\n\t|| (2305551083)                             ||");
    printf("\n\t|| 5. Made Pradnyan Pranata                 ||");
    printf("\n\t|| (2305551107)                             ||");
    printf("\n\t|| 6. Ida Bagus Gede Dhananjaya             ||");
    printf("\n\t|| (2305551120)                             ||");
    printf("\n\t|| 7. Ni Putu Putri Ayu Antari              ||");
    printf("\n\t|| (2305551163)                             ||");
    printf("\n\t==============================================");
    close();
}
void close(){

    printf("\n\tSelanjutnya...");
    getchar();
    system("cls");
}
int repeat(){

    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t==============================================");
    printf("\n\t||Apakah anda ingin mengulang?              ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 2. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    menu = inputMenuRepeat();
    if (menu==1){
        close();
        main();
    }else if(menu==2){
        close();
        end();
    }
    return 0;
}
void end(){

    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI||");
    printf("\n\t||           SAMPAI JUMPA KEMBALI           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||         SALAM HANGAT KELOMPOK 9          ||");
    printf("\n\t||                                          ||");
    printf("\n\t==============================================\n\n\n");
}
void volumeDanLuasPermukaanTabung(){

    float jari_jari, tinggi, luas_permukaan, volume;

    printf("\t===========================================\n");
    printf("\tMenghitung Volume dan Luas Permukaan Tabung\n");
    printf("\t===========================================\n");
    printf("\n\tMasukkan jari-jari dari tabung : ");
    jari_jari = input();
    printf("\n\tMasukkan tinggi dari tabung : ");
    tinggi = input();
    luas_permukaan = 2 * PHI * jari_jari * (jari_jari + tinggi);
    volume = PHI * jari_jari * jari_jari * tinggi;

    printf("\t===========================================\n");
    printf("\tVolume tabung adalah %.2f", volume);
    printf("\n\tLuas permukaan tabung adalah %.2f\n", luas_permukaan);
    printf("\t===========================================\n");

}

void volumeDanLuasPermukaanBola(){

    float radius, luas_permukaan, volume;

    printf("\n\t=============================================");
    printf("\n\t||Menghitung Volume dan Luas Permukaan Bola||");
    printf("\n\t=============================================");
    printf("\n\tInputkan radius bola: ");
    radius = input();

    luas_permukaan = 4 * PHI * radius * radius;
    volume = (4/3) * PHI * pow(radius, 3);
    
    printf("\n\t============================================");
    printf("\n\tVolume bola adalah %.2f", volume);
    printf("\n\tLuas permukaan bola adalah %.2f", luas_permukaan);
    printf("\n\t============================================");
}


void volumeDanLuasPermukaanLimasSegiEmpat(){

    float tinggi_limas, panjang, lebar, luas, keliling, luas_permukaan, volume;

    printf("\t=========================================================\n");
    printf("\t||Menghitung Volume dan Luas Permukaan Limas Segi Empat||\n");
    printf("\t=========================================================\n");
    printf("\n\tMasukkan panjang sisi alas : ");
    panjang = input();
    printf("\n\tMasukkan tinggi limas : ");
    tinggi_limas = input();
    printf("\n\tMasukkan lebar : ");
    lebar = input();
    
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    luas_permukaan = luas + (keliling * tinggi_limas)/2;
    volume = (luas * tinggi_limas) / 3;

    printf("\t=================================================\n");
    printf("\tVolume limas segi empat adalah %.2f", volume);
    printf("\n\tLuas permukaan limas segi empat adalah %.2f", luas_permukaan);
    printf("\n\t=================================================\n");

}


void volumeDanLuasPermukaanPrismaSegitiga(){

    float alas_segitiga, tinggi_segitiga, tinggi_prisma, sisi_miring;
    float luas_segitiga, keliling_segitiga, luas_permukaan, volume;
    printf("\t==========================================================\n");
    printf("\t|| Menghitung Volume dan Luas Permukaan Prisma Segitiga ||\n");
    printf("\t==========================================================\n");
    printf("\n\tMasukkan sisi alas segitiga : ");
    alas_segitiga = input();
    printf("\n\tMasukkan tinggi alas prisma : ");
    tinggi_segitiga = input();
    printf("\n\tMasukkan sisi miring segitiga : ");
    sisi_miring = input();
    printf("\n\tMasukkan tinggi prisma : ");
    tinggi_prisma = input();
    luas_segitiga = 0.5 * alas_segitiga * tinggi_segitiga;
    keliling_segitiga = alas_segitiga + tinggi_segitiga + sisi_miring;

    luas_permukaan = (2 * luas_segitiga) + (keliling_segitiga * tinggi_prisma);
    volume = luas_segitiga * tinggi_prisma;
    printf("\n\t==================================================\n");
    printf("\n\tVolume prisma adalah %.2f\n", volume);
    printf("\n\tLuas permukaan prisma adalah %.2f\n", luas_permukaan);
    printf("\n\t==================================================");

}

void volumeDanLuasPermukaanKerucut(){

    float radius, tinggi, sisi_miring;
    float volume, luas_permukaan;
    printf("\n\t==================================================");
    printf("\n\t|| Menghitung Volume dan Luas Permukaan Kerucut ||");
    printf("\n\t==================================================");
    printf("\n\tInputkan panjang radius: ");
    radius = input();
    printf("\n\tInputkan sisi miring kerucut: ");
    sisi_miring = input();
    printf("\n\tInputkan tinggi kerucut: ");
    tinggi = input();
    sisi_miring = sqrt(pow(radius, 2) + pow(tinggi, 2));
    luas_permukaan = PHI * radius *(radius + sisi_miring);
    volume =  (PHI * pow(radius,2) * tinggi) / 3;

    printf("\n\t==================================================");
    printf("\n\tVolume kerucut adalah %.2f", volume);
    printf("\n\tLuas permukaan kerucut adalah %.2f", luas_permukaan);
    printf("\n\t==================================================");
    
}

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
    else if (select <= 0)
    {
        printf("Tidak boleh negatif, masukkan angka : ");
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
