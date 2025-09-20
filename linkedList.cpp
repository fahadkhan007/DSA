#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
node* insert(node* head, int val){
    if(head == nullptr){
        return new node(val);
    }
    node* newnode = new node(val);
    newnode->next = head;
    return newnode;

}
int main(){
    node* head=nullptr;
    return 0;
}