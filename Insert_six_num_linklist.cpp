#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
struct node {
	int data;
	node *next;
};
int i,a[6],j;
node *root,*right;
cout<<"Enter 6 numbers"<<endl;
for(i=0;i<6;i++){
cin>>j;
node *temp;
temp = root;
temp = (node *)malloc(sizeof(node));
temp->data = j;
temp->next = right;
a[i]=temp->data;
}
for(i=0;i<6;i++){
cout<<"Number"<<a[i]<<endl;
}
return 0;
}
