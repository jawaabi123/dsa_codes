
#include <stdio.h>
#include<bits/stdc++.h>
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
void insertnode(node* &head,int data)
{
    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
void delete_start(node* &head)
{
    node* temp=head;
    head=head->next;
    free(temp);
    return;
}

void delete_last(node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        node* temp=head;
        node* t2=NULL;
       while(temp->next!=NULL)
       {
         t2=temp;
         temp=temp->next;
       }
      
       t2->next=NULL;
       delete temp;
    }
    
}
void deletnode(node* &head,int pos)
{
    if(pos==1)
    {
        delete_start(head);
        return;
    }
    else
    {
        node* temp=head;
        node* t2=NULL;
        while(pos>1)
        {
            t2=temp;
            temp=temp->next;
            pos--;
        }
        if(temp->next==NULL)
        {
            delete_last(head);
            return;
        }
        else
        {
            t2->next=temp->next;
            delete temp;
        }
        /*code to do both last and any pos deletion
        
        t2->next=temp->next;
        delete temp;
    }
}
void printlist(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
}
int main()
{
   node* head=new node(10);
   node* tail=head;
   insertnode(head,11);
   insertnode(head,12);
   insertnode(head,13);
   insertnode(head,14);
   printlist(head);
   cout<<endl;
   
   deletnode(head,1);
   printlist(head);
   cout<<endl;
   deletnode(head,4);
   printlist(head);
   cout<<endl;
  deletnode(head,2);
   printlist(head);
   cout<<endl;
   deletnode(head,2);
   printlist(head);
   cout<<endl;

    return 0;
}
