#include "linkedlist.h"


node * init()
{
  node* node1=(node*)malloc(sizeof(node));
  node1->next=NULL;
  return node1;
}

node * add_node(node * prev)
{
  node* node1=(node*)malloc(sizeof(node));
  prev->next=node1;
  node1->next=NULL;
  return node1;
}

void delete_node(node * delete_node)
{
  delete_node->data=0;
  delete_node->next=NULL;
  free(delete_node);
  delete_node=NULL;
}

void print_node(node * head)
{
  node *curr=head;
  while(curr!=NULL)
  {
    printf("%d ",curr->data);
    curr=curr->next;

  }
}
node * find_node(int data,node *head)
{
  node *curr=head;
  while(curr!=NULL)
  {

    if(curr->data==data);
      break;
    curr=curr->next;

  }

      return curr;

}
