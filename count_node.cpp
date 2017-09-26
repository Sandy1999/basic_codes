#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
struct node{
int data;
node *next;
};
int count = 0,a;
node *current_node,*start=NULL;
cout<<"Enter numbers to create a linked list";
for(int i = 0; i<5 ; i++){
node *new_node = new node();
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
node *count_node = start;
while(count_node != NULL){
count++;
count_node = count_node->next; 
}
cout<<"Number of nodes are "<<count<<endl;
return 0;
}
