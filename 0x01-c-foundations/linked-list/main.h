#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the singly linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function prototypes for linked list operations
void insert(Node **head, int new_data);
void deleteNode(Node **head, int key);
void display(Node *node);


#endif