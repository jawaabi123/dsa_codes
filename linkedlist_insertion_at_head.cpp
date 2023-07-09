#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
                                     ///insert at start(head) of singlell
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;        //creating a new node
        next=NULL;
    }
};
void insert_node(node* &head,int data)
{
    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
void printlist(node* &head)
{
    node* temp=head;
   
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
}
int main()
{
  
    node* n1=new node(10);
    node* head=n1;
    insert_node(head,12);
    insert_node(head,13);
    printlist(head);
    //node* n2=new node(20);
    //cout<<node1->data<<endl;
    //cout<<n2->data<<endl;
    //cout<<node1->next;
    
    return 0;
}
