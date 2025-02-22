#include <stdio.h>
int main(){
    int mat[2][3]={{4,8,2}, {1,7,6}};
    for(int i=0; i<2; i++){
        for(int s=0; s<3; s++){
            printf("\ndireccion: %p \n", &mat[i][s]);
        }
    }
    return 0;
}