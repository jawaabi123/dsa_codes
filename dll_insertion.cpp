
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }
    node()
    {
        data=0;
        prev=NULL;
        next=NULL;
    }
};
void insert_start(node* &head,node* &tail,int val)
{
    if(head==NULL)
    {
        node* newnode=new node(val);
        head=newnode;
        tail=newnode;
    }
    else
    {
        node* newnode=new node(val);
        newnode->next=head;
       head->prev=newnode;
       head=newnode;
    }
    
}
void insert_end(node* &head,node* &tail,int val)
{
    if(tail==NULL)
    {
        node* newnode=new node(val);
        head=newnode;
        tail=newnode;
    }
    else
    {
        node* newnode=new node(val);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insert_pos(node* &head,node* & tail,int pos,int val)
{
    if(pos==1)
    {
        insert_start(head,tail,val);
        return;
    }
    else
    {
       
        node* temp=head;
        int count =1;
        while(count<pos-1)
        {
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL)
        {
            insert_end(head,tail,val);
            return;
        }
        else
        {
            node* newnode=new node(val);
            
            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next->prev=newnode;
            temp->next=newnode;
        }
        
        
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
    node* head=NULL;
    node* tail=NULL;
    insert_start(head,tail,2);
    insert_start(head,tail,3);
    insert_start(head,tail,4);
    insert_start(head,tail,5);
    printlist(head);
    cout<<endl;
    insert_end(head,tail,6);
    printlist(head);
    cout<<endl;
    insert_start(head,tail,88);
    printlist(head);
    cout<<endl;
    insert_pos(head,tail,6,99);
    printlist(head);
     cout<<endl;
   // insert_pos(head,tail,6,999);
    //printlist(head);
    return 0;
}
