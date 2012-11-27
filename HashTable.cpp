#include "HashTable.h"
//only implemented with strings as keys... for now!
template <typename T>
HashTable<T>::HashTable(T defVal) {
  defaultValue = defVal;
  arr = new int[255];
}

template <typename T>
int HashTable<T>::hash(string k) {
  return 0;
}

template <typename T>
void HashTable<T>::insert(string k, T val) {
  
}

template <typename T>
void HashTable<T>::remove(string k) {

}

template <typename T>
T HashTable<T>::find(string k) {
  return defaultValue;
}

template class HashTable<int>;
template class HashTable<string>;
template class HashTable<char>;
