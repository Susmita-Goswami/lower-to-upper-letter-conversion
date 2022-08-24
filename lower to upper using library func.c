#include<stdio.h>
int  main(void)
{
    char lower,upper;
    printf("enter the char ");
    scanf("%c",&lower);
    upper =toupper(lower);
    printf(" upper letter is %c ",upper );
}
