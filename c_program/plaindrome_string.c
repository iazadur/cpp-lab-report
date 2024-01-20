// write a palindrome string program in c
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter the string: ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
    return 0;
}

// input: Enter the string: madam
// output: String is palindrome
// input: Enter the string: hello
// output: String is not palindrome
