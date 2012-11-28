#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

#include "Entry.h"
#include <string>
#include <list>

template <typename T>
class HashTable {
  private:
    std::list< Entry<T>* >* table;
    T defaultValue;
    int hash(std::string k);
  public:
    HashTable<T>(T defVal);
    void insert(std::string k, T val);
    void remove(std::string k);
    T find(std::string k);
    void print();
};

#endif
