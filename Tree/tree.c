#include <stdio.h>
#include "tree.h"

tree newNode(int data){
   tree temp;
   temp=(tree)malloc(sizeof(struct Node));
   temp->data=data;
   temp->firstChild=NULL;
   temp->nextSibling=NULL;
   return temp;
}
tree insert(int data,tree root){
    tree temp;
    temp=(tree)malloc(sizeof(struct Node));
   temp->data=data;
   if (root->firstChild==NULL){
   root->firstChild=temp;
   temp->nextSibling=NULL;
   }
   else{
       
   temp->firstChild=NULL;
   temp->nextSibling=NULL;}
   return temp;
}
void tree_print(tree root){
    tree root1 = root;
    tree temp = root1->firstChild;
    printf("%d\n",root->data);
 while (root1!=NULL){
    while (temp->nextSibling!=NULL){
        printf("%d\t",temp->data);
        temp= temp->nextSibling;
    }
    root1= root1->firstChild;
    temp= root1->firstChild;
    printf("\n");
 }
    
}

