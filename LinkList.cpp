#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
struct node {
int data;
node *next;
};
int i;
node *root;
cout<<"Enter a numbers"<<endl;
cin>>i;
node *temp;
temp = root;
temp = (node *)malloc(sizeof(node));
temp->data = i;
temp->next = '\0';
cout<<temp->data;
return 0;
}
