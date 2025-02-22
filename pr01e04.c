#include <stdio.h>
int main(){
    int mat[2][3]={{4,8,2}, {1,7,6}};
    for(int i=0; i<2; i++){
        for(int s=0; s<3; s++){
            printf("\ndireccion: %p \n", &mat[i][s]);
        }
    }
    printf("\ndireccion de mat: %p\n", &mat);
    printf("\ndireccion mat[0]: %p\n", &mat[0]);
    printf("\ndireccion mat [0][0]; %p\n", &mat[0][0]);
    return 0;
}    