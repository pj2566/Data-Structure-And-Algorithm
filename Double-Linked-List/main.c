#include <stdio.h>
#include "Doublelinkedlist.h"
#include <stdlib.h>
int main(){
    LLSP head=NULL;
create_node(&head,10);
Insert_At_Beg(&head,20);

    printList(head);
    
}