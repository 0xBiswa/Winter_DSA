#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int value){
        data = value;
        next=nullptr;
    }
};
class LinkedList{
    private:
        Node* head;
    public: 
    
    LinkedList(){
        head = nullptr;
    }
    void addFirst(int data){
        if(head == nullptr){
            head = new Node(data);
            return ;
        }

        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return ;
    }
    void displayList(){
        Node* curr = head;
        // cout << curr;
        while(curr != nullptr){
            cout << curr->data << endl;
            curr=curr->next;
        }
    }
    void insert(int data){
        Node* curr = head;
        while(curr->next!=nullptr){
            curr=curr->next;
        }
        if(curr != nullptr && curr->next==nullptr){
            Node* newNode = new Node(data);
            curr->next=newNode;
        }
    }
    bool search(int target){
        Node* curr = head;
        while(curr!=nullptr){
            if(curr->data == target){
                return true;
            }
            curr = curr->next;
        }
        return false;
 
    }
    
};

int main(){
    LinkedList ll;
    ll.addFirst(10);
    ll.insert(20);
    ll.addFirst(30);
    ll.addFirst(40);
    ll.insert(50);

    ll.displayList();

    cout << ll.search(50)<<endl;
    cout << ll.search(75)<<endl;
    return 0;
}