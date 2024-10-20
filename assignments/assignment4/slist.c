#include "slist.h"
#define NULL ((void*)0)

 struct node{
    int numGuesses;
    char name[30];
    struct node* next;
};


 typedef struct singlelinkedList{
    // Pointer to the head node
    node* head;
    node* tail;
} slist;

void insertOrdered(slist* list, char p_name[], int p_numGuesses){
   
    struct node* nodeToInsert = malloc(sizeof(struct node));
    strcpy(nodeToInsert->name,p_name);
    nodeToInsert->numGuesses= p_numGuesses;
    if(list->head == NULL ){
        list->head = nodeToInsert;
        list->tail = NULL;

    }else if(list->head->numGuesses > p_numGuesses ){
            nodeToInsert->next = list->head;
            list->head = nodeToInsert;
        
    }else{
        struct node* currentNode = list->head;
        // eg 3 -> 6 | 5, 3<5 , 6<5 no,
        while(currentNode != NULL && currentNode->next->numGuesses < p_numGuesses){
            currentNode = currentNode->next;

        }
        // 5->6
        nodeToInsert->next = currentNode->next;
        //3->5
        currentNode->next=nodeToInsert;
        // 3->5->6

    }
}
// Prints the linked list 
void printList_n(slist* list, int n){
    // Only print up to n nodes
    node* currentNode = list->head;
    while(currentNode != NULL){
        prinf("%s\t%d",currentNode->name,currentNode->numGuesses);
    }
}
