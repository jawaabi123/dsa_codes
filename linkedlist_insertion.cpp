#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
                                     ///insert at start(head) of singlell
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
    node()
    {
        data=0;
        next=NULL;
    }
};
void insert_head(node* &head,int val)
{
    if(head==NULL)
    {
        head->data=val;
        head->next=NULL;
    }
    else
    {
        node* newnode=new node(val);
        newnode->next=head;
        head=newnode;
    }
}
void insert_tail(node* &tail,int val)
{
    node* newnode=new node(val);
    tail->next=newnode;
    tail=newnode;
    
}
void insert_pos(node* &head,node* &tail,int val,int pos)
{
    if(pos==1)
    {
        insert_head(head,val);
        return;
    }
    node* newnode=new node(val);
    node* temp=head;
    int n=1;
    while(n<pos-1)
    {
        temp=temp->next;
        n++;
    }
    if(temp==tail)
    {
        insert_tail(tail,val);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
    
}
void print(node* &head)
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
    node* head=new node(9);
    node* tail=head;
    insert_head(head,10);
    insert_head(head,20);
    insert_head(head,30);
    print(head);
    
    cout<<endl;
    
    insert_tail(tail,40);
    insert_tail(tail,40);
    print(head);
    cout<<endl;
    
    insert_pos(head,tail,50,7);
    insert_pos(head,tail,5000,6);
    print(head);
    
    
    return 0;
}
