#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int  sparce[4][5]={
        {0,0,6,0,9},
        {0,0,4,6,0},
        {0,0,0,0,0},
        {0,1,2,0,0}};
        int size=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                if(sparce[i][j] !=0)
                    size++;
            }
        }
        int matrix[3][size];
        int k=0;
          for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                if(sparce[i][j] !=0){
                    matrix[0][k]=i;
                    matrix[1][k]=j;
                    matrix[2][k]=sparce[i][j];
                    k++;
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<size;j++){
                printf("%d",matrix[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    return 0;
}
