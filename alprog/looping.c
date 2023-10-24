/*********************************************
===== JUDUL :  MENGHITUNG NILAI RATA-RATA ====
DEKLARASI :
    var
        array x member 11 : float
                    index : integer
                    hasil : float
ALGORITMA :
    FOR index = 0 sampai 10 step 1
        hasil += x[index]
    END FOR
    hasil /= 11 step 2
OUTPUT : hasil
**********************************************/

#include <stdio.h>
#include "rata_rata.h"

#define N 11 
float rata_rata (float *input_nilai, int index);
int main(){

    float x[11] = {6.0, 6.0, 4.0, 6.0, 2.0, 5.0, 5.0, 6.0, 7.0, 6.0, 8.0};
    float average = 0.0;
    average = rata_rata (x, N);
    printf("Nilai rata rata : %.2f", average);
    return 0;
}
float rata_rata (float *input_nilai, int index){
    float hasil;
    int i; 
    for(i = 0; i < index; i++){

        hasil += input_nilai[i];
    }
    hasil /= i; 
    return (hasil);
}

