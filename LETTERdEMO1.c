//conversion from lowercase to uppercase without using library function
#include<stdio.h>
int main()
{
    char lower;
    printf("enter a lowercase letter=");
    scanf("%c",&lower);//a=97
    printf("The uppercase letter=%c",lower-32);//A=65
}
