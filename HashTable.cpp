#include "HashTable.h"
#include <iostream>


//only implemented with strings as keys... for now!
template <typename T>
HashTable<T>::HashTable(T defVal) {
  defaultValue = defVal;
  table = new std::list< Entry<T>* >[255];
}

template <typename T>
int HashTable<T>::hash(string k) {
  int hashVal = 0;
  for(int i = 0; i<k.size(); ++i) {
    hashVal += k[i];
  }
  hashVal = hashVal % 255;
  return hashVal;
}

template <typename T>
void HashTable<T>::insert(string k, T val) {
  Entry<T>* toBeAdded = new Entry<T>(k,val);
  int hv = hash(k);
  if(!table[hv].empty()) {
    Entry<T>* initialFront = table[hv].front();
    table[hv].push_back(table[hv].front());
    table[hv].pop_front();
    while(table[hv].front() != initialFront) {
      if(table[hv].front()->getKey().compare(k)==0) {
	table[hv].pop_front();
	break;
      }
      table[hv].push_back(table[hv].front());
      table[hv].pop_front();
    }
  }
  if(table[hv].front()->getKey().compare(k)==0) table[hv].pop_front();
  table[hv].push_front(toBeAdded);

}

template <typename T>
void HashTable<T>::remove(string k) {
  int hv = hash(k);
  Entry<T>* initialFront = table[hv].front();
  if(!table[hv].empty()) {
    while(!(table[hv].front()->getKey().compare(k)==0)) {
      table[hv].push_back(table[hv].front());
      table[hv].pop_front();
      if(initialFront == table[hv].front()) return;
    }
    table[hv].pop_front();
  }
}

template <typename T>
T HashTable<T>::find(string k) {
  int hv = hash(k);
  if(!table[hv].empty()) {
    std::list< Entry<T>* > holder = table[hv];
    while(!holder.empty()) {
      if(holder.front()->getKey().compare(k)==0) {
	return holder.front()->getValue();
      }
      holder.pop_front();
    }
  }
  return defaultValue;
}

template <typename T>
void HashTable<T>::print() {
  std::cout<<std::endl<<"Hash Code : key -> value;  key2 -> value2; ... "<<std::endl;
  for(int i = 0; i<255; ++i) { 
    if(!table[i].empty()) {
      std::cout<<i<<" : ";
      std::list< Entry<T>* > holder = table[i];
      while(!holder.empty()) {
	std::cout<<holder.front()->getKey()<<" -> "<<holder.front()->getValue()<<";  ";
	holder.pop_front();
      }
      std::cout<<std::endl;
    }
  }
  std::cout<<std::endl;
}

template class HashTable<int>;
template class HashTable<string>;
template class HashTable<double>;
