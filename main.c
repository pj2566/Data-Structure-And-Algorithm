
#include <stdio.h>
#include "tree.h"
int main(){
   tree root= newNode(10);
   tree child1=insert(50,root);
   tree child2= insert(60,root);
   child1->nextSibling=child2;
   tree child3= insert(70,root);
   child2->nextSibling= child3;
   tree child4= insert(70,root);
   child3->nextSibling= child4;
   tree child11= insert(90,child1);
   tree child12= insert(100,child1);
   child11->nextSibling=child12;
   tree_print(root);
    tree child111= insert(40,child11);
}