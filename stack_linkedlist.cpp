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
};
class stack
{
    public:
    node* top;
    int size;

    void push(int data)
    {
       node* newnode=new node(data);
       newnode->next=top;
       top=newnode;
       size++;
    }
    int pop()
    {
        int val;
        if(top==NULL)
        return -1;
        
        else
        {
            node* temp=top;
             val=top->data;
            top=top->next;
            delete temp;
            size--;
        }
        return val;
    }
    int ssize()
    {
        return size;
    }
    
};



int main() 
{
  stack s;
  s.push(10);
  s.push(20);
  s.push(30);
       // cout << "Element popped: " << s.pop() << "\n";
  cout << "stack size is " << s.ssize() << "\n";
  return 0;
}
