#ifndef my_header_file  
#define my_header_file  
//#include <stdio.h>
typedef struct node
{
  int data;
  struct node *next;
  struct node *prev;

}**LLDP,*LLSP;
void
create_node (LLDP, int);

void Insert_At_Beg(LLDP, int);
//void Insert_At_Pos(LLDP header,int POS, int data);
//void Insert_At_End(LLDP head_ref, int new_data);
//void DeleteNode(LLDP head_ref, int key);
void
printList (LLSP);

#endif
