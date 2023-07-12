
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
void delete_start(node* &head)
{
    if(head==NULL)
    {
        cout<<"list is already empty";
    }
    else
    {
        node* temp=head;
        head=temp->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
        
    }
}
void delete_end(node* &tail)
{
    if(tail==NULL)
    {
        cout<<"list is already empty";
    }
    else
    {
        node* temp=tail;
        tail=temp->prev;
        tail->next=NULL;
        temp->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
}
void delete_pos(node* &head,node* &tail,int pos)
{
    if(pos==1)
    {
        delete_start(head);
    }
    else
    {
        node* temp=head;
        node* t2=NULL;
        int count=1;
        while(count<pos)
        {
            t2=temp;
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL)
        {
            delete_end(tail);
        }
        else
        {
            t2->next=temp->next;
            temp->prev=NULL;
            temp->next->prev=t2;
            temp->next=NULL;
            delete temp;
            
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
    insert_start(head,tail,5);
    insert_start(head,tail,88);
    insert_start(head,tail,6);
    printlist(head);
    cout<<endl;
    delete_start(head);
    printlist(head);
    cout<<endl;
    delete_end(tail);
    printlist(head);
    cout<<endl;
    delete_pos(head,tail,3);
    printlist(head);
    cout<<endl;
    return 0;
}
