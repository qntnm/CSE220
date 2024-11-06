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


#endif 