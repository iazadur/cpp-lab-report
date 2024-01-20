// write transpose of a matrix in c program
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,r,c;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("The transpose of matrix is: \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// input: Enter the number of rows and columns of matrix: 2 2
//        Enter the elements of matrix: 1 2 3 4
// output: The transpose of matrix is: 
//         1       3
//         2       4
// input: Enter the number of rows and columns of matrix: 3 3
//        Enter the elements of matrix: 1 2 3 4 5 6 7 8 9
// output: The transpose of matrix is:
//         1       4       7
//         2       5       8
//         3       6       9
