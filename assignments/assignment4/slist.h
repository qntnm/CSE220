#ifndef SLIST_H
#define SLIST_H

typedef struct node{
    int numGuesses;
    char name[30];
    struct node* next;
}node;
typedef struct slist{
    // Pointer to the head node
    node* head;
    node* tail;
}slist;
// Function to insert node
void insertOrdered(slist* list, char name[], int num_guesses);
// Prints the linked list: 
void printList_n(slist* list, int n);
#endif SLIST_H

