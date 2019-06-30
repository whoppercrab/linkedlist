#include <stdio.h>
#include <string.h>
#include "doublelinkedlist.h"
typedef struct inputList{
  char a;
  int nodenum1;
  int nodenum2;
}inputlist;


int main()
{
  node *head,*tail;
  int nodeNum=0,nodeCalc=0;
  char temp[20]={0,},temp1[10]={0,},temp2[10]={0,};
  inputlist *il;
  init_first(&head,&tail);



  if(tail==NULL)
    printf("?????\n");
  /*  scanf(" %[^\n]s",&temp[0]); 왜?*/
  fgets(temp, 20, stdin);

  char *p = strtok(temp, " ");
  nodeNum=atoi(p); //노드 갯수

  p = strtok(NULL, " ");

  nodeCalc=atoi(p); //연산 횟수



  il=(inputlist*)malloc(sizeof(inputlist));

  for(int i=0; i<nodeNum; i++)
  {
    printf("???\n");
    add_node(&tail,i+1);
  }
  for(int i=0; i<nodeCalc; i++)
  {
    //scanf("%c %d %d",il[i].a,il[i].nodenum1,il[i].nodenum2);
  }
  return 0;
}
