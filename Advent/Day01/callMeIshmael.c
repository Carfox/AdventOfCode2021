#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(void){
    FILE *fin = fopen("input.txt","r");
    FILE *fout = fopen("output.txt", "w");
    int count=0, num, aux=0;
    while ( fscanf(fin, "%d", & num ) == 1 ){
        if(aux<num){
        count++;
        }
        aux = num;
        }
    fclose(fin);
    fprintf(fout,"%d",count-1);
    return 0;
}