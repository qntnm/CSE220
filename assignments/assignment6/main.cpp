#include "dict.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(){

Dict<int,int> phone_dir;
 phone_dir.add(4236,234);
phone_dir.add(4326,2345);
Dict<string,int> nameBook;
nameBook.add("Jeff",23434);
cout << phone_dir[4236] << endl;
cout << phone_dir[4326] << endl;
//cout << phone_dir[213] << endl;
cout << nameBook["Jeff"] << endl;



    return 1;
}