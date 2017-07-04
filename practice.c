#include<stdio.h> 
void main()
{
int a,b,c=0,mid,l,h,f,e[10]={1,3,56,0,122,78,4,6,39,10};
for(a=0;a<10;a++){
    for(b=a+1;b<10;b++){
       if(e[a]>e[b]){
          c=e[a];
          e[a]= e[b];
          e[b]=c;
        }
     }
}
for(a=0;a<10;a++)
{
  printf("%d ",e[a]);
}
int d;
 printf("\n Enter a number to search in array");
 scanf("%d",&d);
l=0;
h=9;
mid=(l+h);
while(l<h){
 if(e[mid]<d){
   l=mid+1; 
 }
 if(e[mid]>d){
   h=mid-1;
 }
  if(e[mid]==d){
   f=0;
   break;
  }
}
if(f==0)
 printf("\n %d present in array",d);
else printf("%d not present in array",d);
}





