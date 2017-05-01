#include <stdio.h>

typedef struct{
  int data;
  struct Llist *next;
}Llist, *lptr;

Llist * insert(Llist *root, int data);
void delete(Llist *root, int data);
Llist * reverse(Llist * root);
void traverse_list(lptr root);

int main(int argc, const char *argv[])
{
  Llist *root;
  root = insert(root,2);
  root = insert(root,4);
  root = insert(root,6);
  root = insert(root,8);
  delete(root, 8);
  root = insert(root,1);
  root = insert(root,3);
  root = insert(root,5);
  root = delete(root,6);
  traverse_list(root);
  root = reverse(root);
  traverse_list(root);

  return 0;
}
Llist * reverse(Llist * root){
  Llist *ptr = root, *tmp=NULL;
  while(ptr != NULL){
    tmp = insert(tmp, ptr->data);
    ptr = ptr->next;
  }
  return tmp;
}
Llist * insert(Llist *root, int data){
  //Llist *ptr = root;
  Llist * tmp =(Llist*)malloc(sizeof(Llist));
  if(tmp == NULL){
    printf("malloc fail");
    exit(-1);
  }
  tmp->data = data;
  //first node
  if(root == NULL){
    tmp->next = NULL;
  }else{
    tmp->next = root;
  }

  return tmp;
}
void  delete(Llist *root, int data){
//traverse list
  Llist *prev = NULL, *current=root;
  while(current->data != data){
    prev = current;
    current = current->next;
    if(current == NULL){
      printf("cannot find the data %d in list",data);
      exit(-1);
    }
  }
  if(prev == NULL){
    root = root->next;
  }else{
    prev->next = current->next;
  }
  free(current);
}

void traverse_list(lptr root){
  lptr ptr = root;
  while(ptr!=NULL){
    printf("data %d",ptr->data);
    putchar('\n');
    ptr = ptr->next;
  }
}
