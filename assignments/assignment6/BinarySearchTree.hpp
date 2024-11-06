#pragma once
#include <vector>

template <typename K, typename V>
class BinarySearchTree{
public:
// BinarySearchTree(){};
// ~BinarySearchTree(){};
void insert(const K& key, const V& value);
V search(const K& key){};


private:
struct node{
    K key;
    V value;
    struct node* left;
    struct node* right;
} typedef node;
node* root;
// node struct, Key,value as data, left,right pointer to next node

// used inside namespace to reduce parameter of insert node




};
