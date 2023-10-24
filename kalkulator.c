#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void open();
void close();
void end();
int repeat();
float input();
double inputDouble();
int inputmenu();
int inputMenuRepeat();
void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();

int main(){
     
    int input;
    open();
    printf("\t====================================\n");
    printf("\t||  PROGRAM KALKULATOR SEDERHANA  ||\n");
    printf("\t====================================\n\n");
    printf("Pilih Operasi Kalkulasi:\n");
    printf("1. Pertambahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");
    printf("5. Modulus ('%')\n");
    printf("Masukan kode operasi: \t");

    input = inputmenu();
    switch (input)
    {
        case 1:
            pengurangan();
            break;
        case 2:
            penjumlahan();
            break;
        case 3:
            perkalian();
            break;
        case 4:
            pembagian();
            break;
        case 5:
            modulus();
            break;
        default:
            break;
    }
    repeat();
    
    return(0);
}

void open(){

    printf("\n\t==============================================");
    printf("\n\t||          SELAMAT DATANG DI PROGRAM       ||");
    printf("\n\t||             KALKULATOR SEDERHANA         ||");
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
void penjumlahan(){

    float number1, number2, result;

    printf("\n1. Penjumlahan\n");
    printf("Masukan bilangan pertama: ");
    number1 = input();
    printf("Masukan bilangan kedua: ");
    number2 = input();

    result = number1 + number2;

    printf("------------------------------\n");
    printf("result:\t\t\t %.2f\n",result);
    
}
void pengurangan(){

    float number1, number2, result;

    printf("\n2. Pengurangan\n");
    printf("Masukan bilangan pertama: ");
    number1 = input();
    printf("Masukan bilangan kedua: ");
    number2 = input();

    result = number1 - number2;

    printf("------------------------------\n");
    printf("result:\t\t\t %.2f\n",result);
}
void perkalian(){

    float number1, number2, result;

    printf("\n3. Perkalian\n");
    printf("Masukan bilangan pertama: ");
    number1 = input();
    printf("Masukan bilangan kedua: ");
    number2 = input();

    result = number1 * number2;

    printf("------------------------------\n");
    printf("result:\t\t\t %.2f\n",result);
}
void pembagian(){

    float number1, number2, result = 0;

    printf("\n4. Pembagian\n");
    printf("Masukan bilangan pertama: ");
    number1 = input();
    printf("Masukan bilangan kedua: ");
    number2 = input();
    if(number2 == 0){

        printf("result:\t\t\t Undefined\n");
    }else{
        
        result = number1 / number2;
        printf("------------------------------\n");
        printf("result:\t\t\t %.2f\n",result);
    }
    
}
void modulus(){

    double number1, number2, result = 0;

    printf("\n5. Modulus\n");
    printf("Masukan bilangan pertama: ");
    number1 = input();
    printf("Masukan bilangan kedua: ");
    number2 = input();
    
    if(number2 == 0){

        printf("result:\t\t\t Undefined\n");
    }else{
        
        result = fmod(number1, number2);
        printf("------------------------------\n");
        printf("result:\t\t\t %.2f\n",result);
    }

    

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
    int scanResult;

    // Membersihkan buffer masukan
    while ((scanResult = scanf("%d%c", &pilihan, &term)) != 2 || term != '\n')
    {
        if (scanResult != 2)
        {
            // Input tidak valid, membersihkan buffer
            while (getchar() != '\n');
        }
        printf("\n\t\t\t\tInput tidak valid. Masukkan menu yang tersedia!");
        printf("\n\t\t\t-------------------------------------------------------------\n");
        return inputmenu();
    }
    return pilihan;
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