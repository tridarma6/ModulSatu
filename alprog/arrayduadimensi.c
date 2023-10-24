#include <stdio.h>
/*
JUDUL = PERKALIAN MATRIKS 2X2
DEKLARASI :
    konstanta 
        MATRIKS2X2 2 : INTEGER
    var 
        array 2 dimensi A[MATRIKS2X2][MATRIKS2X2] = {{1,2}, {3,4}} : integer
        array 2 dimensi B[MATRIKS2X2][MATRIKS2X2] = {{5,6}, {7,8}} : integer
        array 2 dimensi hasil[MATRIKS2X2][MATRIKS2X2] = {{0,0}, {0,0}} : integer
        
        i : integer
        j : integer
        k : integer
ALGORITMA :
    for i = 0 to 1
        for j = 0 to 1
            for k = 0 to 1
                hasil[i][j] += (A[i][k] * B[k][j])
            end for
        end for
    end for
    OUTPUT :
        for i = 0 to 1
            for j = 0 to 1
                WRITE hasil[i][j]
            end for
            WRITE ENTER
        end for

*/
#define MATRIX2X2 2
int A[MATRIX2X2][MATRIX2X2] = {{1,2}, {3,4}};
int B[MATRIX2X2][MATRIX2X2] = {{5,6}, {7,8}};
int hasil[MATRIX2X2][MATRIX2X2] = {{0,0}, {0,0}};
int i;
int j;
int k;
int main(){

    for(i = 0; i < MATRIX2X2; i++){
        for(j = 0; j < MATRIX2X2; j++){
            for(k = 0; k < MATRIX2X2; k++){
                hasil[i][j] += (A[i][k] * B[k][j]);
            }
        }
    }

    for(i = 0; i < MATRIX2X2; i++){
        for(j = 0; j < MATRIX2X2; j++){
            printf("%d\t", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}