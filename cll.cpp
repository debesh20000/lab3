

#include <iostream>

using namespace std;

class Node{
    public:
    Node*next;
    int data;
    Node(){
        next=NULL;
    }
};
class LinkedList{
    public:
    Node*head;
    Node*tail;
    LinkedList(){
        head=NULL;
        tail=NULL;
    }
    
    void insert(int value){
        Node*temp=new Node;
        temp->data=value;
        if(head==NULL){
            head=temp;
        }
        else{
            tail->next=temp;
            temp->next=head;
        }
        tail=temp;
    }
    
    
    void insertat(int pos, int value){
        Node*current=head;
        Node*temp=new Node;
        temp->data=value;
        int i=1;
        if(pos==1){
            temp->next=head;
            head=temp;
            tail->next=head;
        }
        else{
        while(i<pos-1){
            i++;
            current=current->next;
        }
        
        temp->next=current->next;
        current->next=temp;
        }
    }
    
    void dellete(){
        Node*current=head;
        Node*temp=tail;
        while(current->next !=tail){
            current=current->next;
        }
        current->next=head;
        tail=current;
        delete temp;
    }
    
    
    void deleteat(int pos){
        Node*current=head;
        int i=1;
        if(pos==1){
            Node*temp=head;
            head->next=head;
            tail->next=head;
        }
        while(i<pos-1){
            i++;
            current=current->next;
        }
        Node*temp=current->next;
        current->next=temp->next;
        delete temp;
    }
    
    
    void countitems(){
        Node*current=head;
        int i=1;
        while(current->next != head){
            i++;
            current=current->next;
        }
        cout<<"gg"<<i<<endl;
    }
    
    void display(){
        Node*current=head;
        while(current->next != head){
            cout<<current->data<<"->";
            current=current->next;
        }
        cout<<current->data;
        cout<<endl;
    }
};

int main(){
    LinkedList lol;
    lol.insert(1);
    lol.insert(2);
    lol.insert(3);
    lol.display();
    lol.insertat(2,5);
    lol.display();
    lol.dellete();
    lol.display();
    lol.deleteat(2);
    lol.display();
    lol.insert(5);
    lol.insert(6);
    lol.insert(7);
    lol.display();
    lol.countitems();
    return 0;
}
