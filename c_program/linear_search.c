// write a linear search program
#include<stdio.h>
int main()
{
    int a[100],i,n,search;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Element not found");
    }
    return 0;
}

// input: Enter the size of array: 5
//        Enter the elements of array: 1 2 3 4 5
//        Enter the element to be searched: 3
// output: Element found at position 3
