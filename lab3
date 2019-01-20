#include <iostream>
using namespace std;

class Node
{
    public:
        //declare Data
        int data;           
        //Pointer to the next node
        Node *next;         
        //Pointer to the previous node
        Node *prev;
        //Constructor that makes both the poiners NULL
        Node()
        {
            next=NULL;
            prev=NULL;
        }
};
class DoubleLinkedList
{
    //Head and Nodes linked with each other
    public:
    //head and tail node type pointer
    Node *head;
    Node *tail;
    //Constructor that makes head and  tail NULL
    DoubleLinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    //function to insert at last pos
    void insert(int value)
    {
        //creation of a node
        Node *temp=new Node;
        //insertion of value in  the node
        temp->data=value;
        //for first element
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
       //for the rest
        else
        {
            tail->next=temp;
            tail->next->prev=tail;
        }
        tail=temp;
        
    }
    //Display
    void display()
	{
		cout<<"The linked list is: ";
		Node *current=head;
		while(current!=NULL)
		{
			cout<<current->data<<"->"; //fancy arrow
			current=current->next;
		}
		cout<<endl;
	}
	//insert at 
	void insertAt(int pos, int value)
	{
	    Node *current=head;
	    int i=1;
	    if(pos!=1)//for only 1
	    {
	        while(i<pos-1)
	        {
	            i++;
	            current=current->next;
	        }
	        
	        Node *temp=new Node;
	        temp->data=value;
	        temp->next=current->next;
	        current->next->prev=temp;
	        current->next=temp;
	        temp->prev=current;
	        
	    }
	    //for other position
	    else
	    {
	        Node *temp=new Node;
	        temp->data=value;
	        temp->next=head;
	        head->prev=temp;
	        head=temp;
	        
	    }
	}
	//delete the last element
	void dellete()
	{
	    Node *temp=tail;
	    tail->prev->next=NULL;
	    delete temp;
	    
	}
	///delete at  
	void deleteAt(int pos)
	{
	    int i=1;
	    Node *current=head;
	    if(pos!=1)
	    {
	        while(i<pos-1)
	        {
	            i++;
	            current=current->next;
	        }
	        Node *temp=current->next;
	        current->next=temp->next;
	        temp->next->prev=current;
	        delete temp;
	    }
	    else
	    {
	        Node *temp=head;
	        head=head->next;
	        delete temp;
	    }
	}
	//function to count the no of items in the LL 
	int countItems()
	{
	    //count variable
	    int count=0;
	    Node *current=head;
	    //moving the pointer through the LL while counting as well
	    while(current!=NULL)
	    {
	        count++;
	        current=current->next;;
	    }
	    
	    return count;
	}
};

int main()
{
    DoubleLinkedList l1;
    for(int i=1;i<=10;i++)
    {
        l1.insert(i);
    }
    l1.display();
    l1.insertAt(1,2);
    l1.insertAt(3,4);
    l1.display();
    l1.dellete();
    l1.display();
    l1.deleteAt(5);
    l1.display();
    cout<<"the total number of items now are "<<l1.countItems()<<endl;
}
