#include<stdio.h>

void main()
{

int a,b;
int *p;

a=10;
b=a;
p=&a;

printf("%u%u\n",a,b);
printf("%d%d",a,p);

}
