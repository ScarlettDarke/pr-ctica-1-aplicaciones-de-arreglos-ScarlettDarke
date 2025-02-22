#include <stdio.h> 
int main(){
 double b[5] = {3, 4, 5, 6, 8};
 for(int i = 1; i < 5; i++){
 printf("\nlugar: %p\n", &b[i]);
 } 
return 0; }
