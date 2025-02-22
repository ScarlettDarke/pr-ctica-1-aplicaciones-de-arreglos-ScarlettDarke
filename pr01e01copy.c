#include <stdio.h>
int main(){
    double b[3]={3,4,5};
    printf("lugar 0: %p\n", &b[0]);
    for(int i=0;i<3;i++){
        printf("\nlugar: %p\n",&b[i] );
    }
    return 0;
} 
