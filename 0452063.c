
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include <stdio.h>
void main(void) {
    int inv=0;        
    double sum=0;    
    float Data;       
    do {
        printf("輸入實數:");     
        scanf("%f", &Data); 
        sum = sum + Data;  
        inv = inv+1;
    } while(inv < 5);                  
    printf( "平均值= %f ",sum/5.0); 
    printf( "\n");                
}
