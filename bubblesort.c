#include<stdio.h>
void main()
{
int a[5],i,j,k;

for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
for(j=i;j<5;j++)
{
if(a[i]>a[j+1])
{
k=a[i];
a[i]=a[j+1];
a[j+1]=k;
}
}
}

for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
}

