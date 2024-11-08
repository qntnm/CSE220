#pragma once
#include <vector>
#include <iostream>
#include <optional>

template <typename K, typename V>
class BinarySearchTree{
public:
// BinarySearchTree(){};
// ~BinarySearchTree(){};
void insert(const K& key, const V& value);
V search(const K& key);


private:
struct node{
    K key;
    V value;
    struct node* left;
    struct node* right;
} typedef node;
node* root = nullptr;


// node struct, Key,value as data, left,right pointer to next node

// used inside namespace to reduce parameter of insert node




};
template<typename K,typename V>
void BinarySearchTree<K,V>::insert(const K& key, const V& value){
    node* currentNode = new node;
    currentNode->key=key; 
    currentNode->value=value;
   if(root == NULL){
    root = currentNode;
    //cout << "null condition" << endl;
    return;
   }
   node* tempNode = root;
    while(true){
    if(currentNode->key < tempNode->key){
        if(tempNode->left == NULL){
            tempNode->left = currentNode;
            break;
        }
        tempNode = tempNode->left;
        
    }else{
        if(currentNode->key > tempNode->key){
        if(tempNode->right == NULL){
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
V BinarySearchTree<K,V>::search(const K& key){
    node* temp= root;
    while(true){
        if(temp == NULL){
            throw std::runtime_error("Value not found");
        }
        else if(temp->key == key){
            return temp->value;
        }else if(key > temp->key){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }
    return temp->value;
};
