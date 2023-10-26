#include<stdio.h>
#include "Doublelinkedlist.h"
#include <stdlib.h>
void
create_node (LLDP header, int data)
{
  LLSP p;
  p = (struct node *) malloc (sizeof (struct node));
  p->data = data;
  p->prev = NULL;
  p->next = NULL;
  *header= p;
}
void Insert_At_Beg(LLDP header, int data){
    LLSP p;
  p = (LLSP) malloc (sizeof (struct node));
  p->data = data;
  p->next = *header;
  p->prev = NULL;
   if ((*header) != NULL)
        (*header)->prev = p;

  *header = p;
}
/*void Insert_At_Pos(LLDP header,int POS, int data){
    LLSP p;
  p = (LLSP) malloc (sizeof (struct node));
  p->data = data;
  LLSP temp;
  temp=(*header);
   for(int i=0;i<POS;i++){  
  temp = temp->next;}
  p->next = temp->next;
  temp->next = p; 
}
void Insert_At_End(LLDP head_ref, int new_data) {
  LLSP new_node = (struct node*)malloc(sizeof(struct node));
  LLSP last = *head_ref; /* used in step 5
  

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}

void DeleteNode(LLDP head_ref, int key) {
  LLSP temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->data != key) {
  (*prev) = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  (*prev)->next = temp->next;

  free(temp);
}*/
void
printList (LLSP p) 
{
  while ( p != NULL)
    {
      printf (" %d ", p->data);
      p = p->next;
    }
}
