#include<stdio.h>
void main()
{
    char c;
    int lower,upper;
    printf("enter an alphebet");
    scanf("%c",&c);
    lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lower||upper)
    {
        printf("%c is vowel",c);
    }
    else
    {
        printf("%c is consonent",c);
    }
    getch();
}
