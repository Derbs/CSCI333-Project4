#include "Entry.h"

template <typename Y>
Entry<Y>::Entry(string k, Y v) {
  key = k;
  value = v;
}

template <typename Y>
string Entry<Y>::getKey() {
  return key;
}

template <typename Y>
Y Entry<Y>::getValue() {
  return value;
}

template class Entry<int>;
template class Entry<string>;
template class Entry<double>;
