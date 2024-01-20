// write multiplication of matrix in c program
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,r1,c1,r2,c2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Multiplication of matrix is not possible");
    }
    else
    {
        printf("Enter the elements of first matrix: ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("The resultant matrix is: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}


// input: Enter the number of rows and columns of first matrix: 2 2
//        Enter the number of rows and columns of second matrix: 2 2
//        Enter the elements of first matrix: 1 2 3 4
//        Enter the elements of second matrix: 5 6 7 8
// output: The resultant matrix is:
//         19      22
//         43      50
// input: Enter the number of rows and columns of first matrix: 2 2
//        Enter the number of rows and columns of second matrix: 2 3
// output: Multiplication of matrix is not possible
