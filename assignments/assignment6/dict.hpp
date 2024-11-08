#ifndef DICT_HPP
#define DICT_HPP
#include <string>
#include <vector>
#include "BinarySearchTree.hpp"
using namespace std;
template <typename K ,typename V> class Dict{
    public:
    Dict(){}
    ~Dict(){}
    void add(const K& key, const V& value);
    V operator[](const K& key); // this allows for object[key] that returns a value
   
    
    

};
template <typename K, typename V>
BinarySearchTree<K,V> bt;
template <typename K, typename V>
void Dict<K,V>::add(const K& key, const V& value){
     bt<K,V>.insert(key,value);

}

template<typename K, typename V>
V Dict<K, V>::operator[](const K& key)
{
    // search for a given key

    return bt<K,V>.search(key);

}



#endif 