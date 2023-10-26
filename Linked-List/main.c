#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>
int main(){
    LLSP head=NULL;
  Insert_At_End(&head, 1);
  Insert_At_Beg(&head, 2);
  Insert_At_Beg(&head, 3);
  Insert_At_End(&head, 4);
  DeleteNode(&head, 3);

    printList(head);
    
}

