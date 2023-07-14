#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
    node()
    {
        data=0;
        next=NULL;
    }
};
class queue
{
    public:
    node* front;
    node* rear;
    int size;
    bool  Empty()
        {
            return front == NULL;
        }  
        int  Peek()
        {
            if(Empty())  
            {  cout<<"Queue is Empty"<<endl;
                return -1;
            } 
            else 
            return front->data;
        }   
    void enque(int data)
    {
        if(front==NULL && rear==NULL)
        {
            node* newnode=new node(data);
            front=newnode;
            rear=newnode;
            size++;
        }
        else
        {
            node* newnode=new node(data);
            rear->next=newnode;
            rear=newnode;
            size++;
        }
    }
    int deque()
    {
        if(front==NULL)    //emplty list condition
          return -1;
        node* temp=front;
        int val=front->data;
        front=front->next;
        delete temp;
        size--;
        return val;
    }
};



int main() 
{
  queue q;
  q.enque(10);
  q.enque(20);
  cout<<"deleted element is:"<<q.deque();
  cout<<"deleted element is:"<<q.deque();
  return 0;
}
