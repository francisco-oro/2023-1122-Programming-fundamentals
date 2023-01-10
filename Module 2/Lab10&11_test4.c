#include <stdio.h>
#define MAXSIZE 20
void readM(int M[MAXSIZE][MAXSIZE],int,int);
void printM(int M[MAXSIZE][MAXSIZE],int,int);

int main ()

{
    int NL,NC,i,j;
    int M[20][20];
    readM(M[20][20],NL,NC);
    printM(M[20][20],NL,NC);    


    return 0;
}


void readM(int M[20][20],int NL,int NC) 
    {
        int i,j;
        printf("Type in number lines ");
        scanf("%d",&NL);
        printf("Type in number of columns ");
        scanf("%d",&NC);
        printf("Type in values \n");

        for(i=0;i<NL;i++)
            {
                for(j=0;j<NC;j++)
                {
                    scanf("%d",&M[i][j]);
                }
            }
    }

void printM(int M[20][20],int NL,int NC)
    {
        int i,j;
        printf("Matrix is \n");

        for(i=0;i<NL;i++)
            {
                for(j=0;j<NC;j++)
                {
                    printf("\t%d\t",M[i][j]);
                }
                printf("\n");
            }
    }