#include "linkedlist.h"


node * init()
{
  node* node1=(node*)malloc(sizeof(node));
  node1->next=node1;
  return node1;
}
