
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include <stdio.h>
void main(void) {

    int inv=0;        /*�p�ƥ��ܼ�*/
    double sum=0;    /*�p���`�M*/
    float Data;       /*��J�Ȧs�bData�ܼ�*/
    do {
        printf("��J���:");      
        scanf("%f", &Data); 
        sum = sum + Data;  
        inv = inv+1;
    } while(inv < 5);                  
    printf( "������= %f ",sum/5.0); 
    printf( "������= %f ",sum/5.0); 
    printf( "\n");                
}
