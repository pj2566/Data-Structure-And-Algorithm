#include <stdio.h>
#include <stdlib.h>
typedef struct Node{ 
  //Node declaration 
	int data; 
	struct Node *firstChild; 
	struct Node *nextSibling; 

}*tree;

 tree newNode(int data);
 tree insert(int data,tree root);
 void tree_print(tree root);