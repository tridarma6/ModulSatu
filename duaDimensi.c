#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PHI 3.14

void open();
void close();
void end();
int repeat();
float input();
int inputmenu();
int inputMenuRepeat();
void luasDanKelilingSegitigaSembarang();
void luasDanKelilingBelahKetupat();
void belahKetupatSimetris();
void belahKetupatAsimetris();
void luasDanKelilingJajarGenjang();
void luasDanKelilingTrapesium();
void trapesiumSamaKaki();
void trapesiumSikuSiku();
void luasDanKelilingLingkaran();

int main(){

    int code;

    open();

    printf("\n\t==============================================");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||                BANGUN DATAR              ||");
    printf("\n\t||                 KELOMPOK 9               ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Bangun Datar:                     ||");
    printf("\n\t|| 1. Segitiga Sembarang                    ||");
    printf("\n\t|| 2. Belah Ketupat                         ||");
    printf("\n\t|| 3. Jajar Genjang                         ||");
    printf("\n\t|| 4. Trapesium                             ||");
    printf("\n\t|| 5. Lingkaran                             ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan kode bangun datar: ");

    code = (int)inputmenu();
    
    switch (code)
    {
    case 1:
        luasDanKelilingSegitigaSembarang();
        break;
    case 2:
        luasDanKelilingBelahKetupat();
        break;
    case 3:
        luasDanKelilingJajarGenjang();
        break;
    case 4:
        luasDanKelilingTrapesium();
        break;
    case 5:
        luasDanKelilingLingkaran();
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
    printf("\n\t||  MENGHITUNG LUAS & KELILING BANGUN DATAR ||");
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
    menu = (int)inputMenuRepeat();
    if (menu==1){
        close();
        main();
    }else if(menu==2){
        close();
        end();
    }
    return 0;
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
float input()
{
    float pilihan, select;
    char enter;
    pilihan = scanf("%lf%c", &select, &enter);
    if (pilihan != 2 || enter != '\n')
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
void luasDanKelilingSegitigaSembarang(){

    float side1, side2, side3, halfCircum, area, circum;

    printf("\n\t==============================================");
    printf("\n\t||              SEGITIGA SEMBARANG          ||");
    printf("\n\t==============================================");

    printf("\n\tInputkan panjang sisi 1: ");
    side1 = input();
    printf("\n\tInputkan panjang sisi 2: ");
    side2 = input();
    printf("\n\tInputkan panjang sisi 3: ");
    side3 = input();

    circum = side1 + side2 + side3;
    halfCircum = circum/2;
    area = (sqrt(halfCircum * (halfCircum - side1) * (halfCircum - side2) * (halfCircum - side3)));

    printf("\t==============================================");
    printf("\n\tKeliling segitiga sembarang adalah %.2f", circum);
    printf("\n\n\tarea segitiga sembarang adalah %.2f", area);
    printf("\n\t==============================================");
    getchar();
    close();

}
void luasDanKelilingBelahKetupat(){

    int code;
    printf("\n\t==============================================");
    printf("\n\t||              BELAH KETUPAT               ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Jenis Belah Ketupat:              ||");
    printf("\n\t|| 1. Belah Ketupat Simetris (d1 = d2)      ||");
    printf("\n\t|| 2. Belah Ketupat Asimetris (d1 != d2)    ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan kode :");
    code = inputMenuRepeat();
    getchar();
    close();

    if(code == 1){
        belahKetupatSimetris();
    }else if(code == 2){
        belahKetupatAsimetris();
    }
    getchar();
    close();
}
void belahKetupatSimetris(){

    float side, circum, area;

    printf("\n\t==============================================");
    printf("\n\t||      Belah Ketupat Simetris (d1 = d2)    ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang sisi: ");
    side = input();
    circum = 4*side;
    area = side*side;
    printf("\t==============================================");
    printf("\n\tKeliling belah ketupat adalah %.2f", circum);
    printf("\n\n\tLuas belah ketupat adalah %.2f", area);
    printf("\n\t==============================================");
}
void belahKetupatAsimetris(){

    float diagonal1, diagonal2, circum, area;

    printf("\n\t==============================================");
    printf("\n\t||      Belah Ketupat Asimetris (d1 != d2)  ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang diagonal 1: ");
    diagonal1 = input();
    printf("\n\tInputkan panjang diagonal 2: ");
    diagonal2 = input();

    circum = 4*(sqrt((diagonal1/2)*(diagonal1/2)+(diagonal2/2)*(diagonal2/2)));
    area = (diagonal1*diagonal2)/2;

    printf("\t==============================================");
    printf("\n\tKeliling belah ketupat adalah %.2f", circum);
    printf("\n\n\tLuas belah ketupat adalah %.2f", area);
    printf("\n\t==============================================");

}
void luasDanKelilingJajarGenjang(){

    float base, height, side, circum, area;
    printf("\n\t==============================================");
    printf("\n\t||              JAJAR GENJANG               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang alas jajar genjang: ");
    base = input();
    printf("\n\tInputkan panjang tinggi jajar genjang: ");
    height = input();
    printf("\n\tInputkan panjang sisi miring jajar genjang: ");
    side = input();

    circum = 2*(base + side);
    area = (base * height);

    printf("\t==============================================");
    printf("\n\tKeliling jajar genjang adalah %.2f", circum);
    printf("\n\n\tLuas jajar genjang adalah %.2f", area);
    printf("\n\t==============================================");
    getchar();
    close();
}
void luasDanKelilingTrapesium(){

    int code;
    printf("\n\t==============================================");
    printf("\n\t||                  TRAPESIUM               ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Jenis Trapesium:                  ||");
    printf("\n\t|| 1. Trapesium Sama Kaki                   ||");
    printf("\n\t|| 2. Trapesium Siku-Siku                   ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan kode:");
    code = inputMenuRepeat();
    getchar();
    close();
    if(code==1){
        trapesiumSamaKaki();
    }else if(code==2){
        trapesiumSikuSiku();
    }
    close();
    
}
void trapesiumSamaKaki(){

    float base, upSide, height, side, circum, area;

    printf("\n\t==============================================");
    printf("\n\t||             TRAPESIUM SAMA KAKI          ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang sisi alas: ");
    base = input();
    printf("\n\tInputkan panjang sisi atas: ");
    upSide = input();
    printf("\n\tInputkan panjang tinggi: ");
    height = input();

    side = sqrt(((base-upSide)/2)*((base-upSide)/2) + (height)*(height));
    circum = base + upSide + (2*side);
    area = ((base + upSide)/2)*height;

    printf("\t==============================================");
    printf("\n\tKeliling trapesium adalah %.2f", circum);
    printf("\n\n\tLuas trapesium adalah %.2f", area);
    printf("\n\t==============================================");
}
void trapesiumSikuSiku(){

    float base, upSide, height, side, circum, area;

    printf("\n\t==============================================");
    printf("\n\t|| TRAPESIUM SIKU-SIKU ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang sisi alas: ");
    base = input();
    printf("\n\tInputkan panjang sisi atas: ");
    upSide = input();
    printf("\n\tInputkan panjang tinggi: ");
    height = input();

    side = sqrt((base-upSide)*(base-upSide) + (height)*(height));
    circum = base + upSide + height + side;
    area = ((base + upSide)/2)*height;

    printf("\t==============================================");
    printf("\n\tKeliling trapesium adalah %.2f", circum);
    printf("\n\n\tLuas trapesium adalah %.2f", area);
    printf("\n\t==============================================");
}
void luasDanKelilingLingkaran(){

    float radius, circum, area;
    printf("\n\t==============================================");
    printf("\n\t||                  LINGKARAN               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang radius lingkaran: ");
    radius = input();

    circum = 2 * PHI * radius;
    area = PHI * radius * radius;

    printf("\t==============================================");
    printf("\n\tKeliling lingkaran adalah %.2f", circum);
    printf("\n\n\tLuas lingkaran adalah %.2f", area);
    printf("\n\t==============================================");
    getchar();
    close();
    
}