
#include "doublelinkedlist.h"


void init_first(node ** ohead, node ** otail)
{
  head=(node*)malloc(sizeof(node));
  tail=(node*)malloc(sizeof(node));
  head->prev=NULL;
  head->next=tail;

  tail->prev=head;
  tail->next=NULL;
  *ohead=head;
  *otail=tail;
}


void add_node(node** tail,int num)
{

  node *newnode=(node*)malloc(sizeof(node));
  newnode->next=(*tail);
  newnode->data=num;
  newnode->prev=(*tail)->prev;
  (*tail)->prev=newnode;
}

node * find_node(node** head,int data)
{

  node* curr=(*head);
  while(curr!=NULL)
  {
    if(curr->data==data)
      break;
    curr=curr->next;
  }
  return curr;
}

void swap_node(char s,node** head,int a,int b)
{
    node *nodeA=find_node(head,a);
    node *nodeB=find_node(head,b);

    nodeA->next->prev=nodeA->prev;
    nodeA->prev->next=nodeA->next;
    if(s=='A')
    {
      nodeB->prev->next=nodeA;
      nodeA->next=nodeB;
      nodeA->prev=nodeB->prev;
      nodeB->prev=nodeA;
    }
    else if(s=='B')
    {
      nodeB->next->prev=nodeA;
      nodeA->next=nodeB->next;
      nodeB->next=nodeA;
      nodeA->prev=nodeB;
    }

}
