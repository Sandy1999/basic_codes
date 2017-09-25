#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
struct node {
int data;
node *next;
};

int a;
node *current_node,*start = NULL;
cout<<"Enter a numbers";
for(int i = 0; i<6; i++){
node *new_node = (node*)malloc(sizeof(node));
cin>>a;
new_node->data = a;
new_node->next = NULL;
if(start == NULL){
start = new_node;
current_node = new_node;
}else{
current_node->next = new_node;
current_node = new_node;
}
}
node *display = start;
while(display != NULL){
cout<<display->data<<" ";
display = display->next;
}
cout<<endl<<"Enter a new node that need to be inserted in begning";
cin>>a;
node *new_node = new node();
new_node->data = a;
new_node->next = start;
start = new_node;
display = start;
while(display != NULL){
cout<<display->data<<" ";
display = display->next;
}
return 0;
}

