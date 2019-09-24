#include<stdio.h>
int main()
{
    int i=0xAABBCCDD;
    char s[10]="0xAABBCCDD";
    char *p;
    p=(char *)&i;
    printf("%x\n",i);
    printf("%x\n",&i);
    printf("%x\n",p);
    printf("%x\n",*p);
    printf("%x\n",*(p+3));
}
