#include<stdio.h>
int main(void)
{
    char lower,upper;
    printf("enter a lowercase letter ",lower);
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("the uppercase letter is %c ",upper);
    return 0;
}
