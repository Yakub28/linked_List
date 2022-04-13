#include <iostream>
#include <stdexcept>

struct Node{
int data;
Node* next;
};
struct Node* head;
void Insert(int x){
    Node *temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void Print(){
    Node* temp=head;
    std::cout<<"List is: ";
    while(temp!=NULL){
    std::cout<<temp->data;
    temp=temp->next;
    }
    std::cout<<"\n";
}


int main(){
    // Node *A;
    // A=NULL;
    // Node *temp=new Node();
    // temp->data=2;
    // temp->link=NULL;
    // A=temp;
    
    
    head=NULL;
    std::cout<<"How many numbers?\n";
    int n,x;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cout<<"Enter the number\n";
        std::cin>>x;
        Insert(x);
        Print();
    }
    
    
    return 0;
}

