#define NULL 0

typedef struct Node{
  int data;
  struct Node *next;
}node;
node * init();
node * add_node(node * prev);
void delete_node(node * delete_node);
void print_node(node * head);
node * find_node(int data,node *head);
