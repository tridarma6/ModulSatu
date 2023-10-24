
float rata_rata (float *input_nilai, int index){
    float hasil;
    int i; 
    for(i = 0; i < index; i++){

        hasil += input_nilai[i];
    }
    hasil /= i; 
    return (hasil);
}