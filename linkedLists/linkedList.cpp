#include <iostream>
using namespace std;
struct linkedList
{
    int data;
    linkedList* next;
    linkedList(): data(0),next(nullptr){}
    linkedList(int x): data(x),next(nullptr){}
};
linkedList* head;
void insert(int data){
    linkedList* curr = head;
    if(head == nullptr){
        head = new linkedList(data);
        return;
    }
    while(curr-> next != nullptr){
        curr=curr->next;
    }
    curr->next=new linkedList(data);
}
void display(){
    linkedList* curr = head;
    cout << "+ + + + + + + + + + + + + + + + + + + + + + +" <<endl;
    if(curr==nullptr)
        cout << "Empty List" <<endl;
    while(curr!=nullptr){
        cout << curr->data <<endl;
        curr = curr->next;
    }
    cout << "+ + + + + + + + + + + + + + + + + + + + + + +" <<endl;
}

void deleteNode(linkedList* Node){
    linkedList* curr = head;
    if(Node == head){
        head=head->next;              
        return;
    }
    while (curr != nullptr)
    {
        if(curr->next == Node){
            linkedList *n = curr->next;
            curr->next=n->next;
            cout << "Node Deleted Sucessfully"<<endl;
            return;
        }
        curr=curr->next;
    }
}
linkedList* search(int data){
    linkedList* curr = head;
    while(curr!=nullptr){
        if(curr->data==data){
            return curr;
        }
        curr = curr->next;
    }
    return curr;
}
int main(){
    insert(11);
    insert(22);
    display();
    deleteNode(search(11));
    display();
    insert(33);
    display();
    return 0;
}