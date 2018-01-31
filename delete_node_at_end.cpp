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
cout<<endl<<"Press enter to delete a node from end";
node *delete_ptr,*ptr = start;
while(ptr != NULL){
    delete_ptr = ptr;
    ptr = ptr->next;
}
delete_ptr->next = NULL;
int temp = delete_ptr->data;
free(delete_ptr);
cout<<"Node deleted is "<<temp<<endl;
cout<<"New list is"<<endl;
display = start;
while(display != NULL){
    cout<<display->data<<" ";
    display = display->next;
    }
return 0;
}

