#define NULL 0

typedef struct NODE{
  int data;
  struct NODE *prev;
  struct NODE *next;
}node;
node* head, *tail;

node* gethead();
node* gettail();
void init_first(node** head,node** tail);
void add_node(node** tail,int data);
node * find_node(node** head,int data);
void swap_node(char s,node* head,int a,int b);
