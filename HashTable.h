#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

#include <string>

using std::string;

template <typename T>
class HashTable {
  private:
    int* arr;
    T defaultValue;
    int hash(string k);
  public:
    HashTable<T>(T defVal);
    void insert(string k, T val);
    void remove(string k);
    T find(string k);
};

#endif
