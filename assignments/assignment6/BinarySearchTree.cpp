#include "BinarySearchTree.hpp"
using namespace std;

template<typename K,typename V>
void BinarySearchTree<K,V>::insert(const K& key, const V& value){
    node* currentNode = new node;
    currentNode->K=key; 
    currentNode->V=value;
   if(root == NULL){
    root = currentNode;
   }
   node* tempNode = root;
    while(true){
    if(currentNode->key < tempNode->key){
        if(tempNode->left == null){
            tempNode->left = currentNode;
            break;
        }
        tempNode = tempNode->left;
        
    }else{
        if(currentNode->key > tempNode->key){
        if(tempNode->right == null){
            tempNode->right = currentNode;
            break;
        }
        tempNode = tempNode->right;

    }
}
    // change current node to temp node
   
   }

};
template<typename K,typename V>
V search(const K& key){
    node* temp= root;
    while(true){
        if(temp == NULL){
            return NULL;
        }
        else if(temp->key == key){
            return temp->value;
        }else if(key > temp->key){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }
};