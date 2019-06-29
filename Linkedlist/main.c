#include <stdio.h>
#include "linkedlist.h"
int main()
{
  node * head,*next;
  head=init();
  head->data=1;
  next=add_node(head);
  next->data=2;
  printf("hello world %d %d\n" ,head->data,next->data);
  delete_node(next);
  next=add_node(head);
  next->data=3;
  next=add_node(next);
  next->data=4;
  print_node(head);

  next=find_node(head,0);
  if(next==NULL)
    printf("찾을수 없음!\n");
  else
      printf("%p",next);
  return 0;
}
