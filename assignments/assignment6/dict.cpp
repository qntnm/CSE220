#include "dict.hpp"
#include "BinarySearchTree.hpp"
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
    bt<K,V>.search(key);

}
