#include "Entry.h"

template <typename X, typename Y>
Entry<X,Y>::Entry(X k, Y v) {
  key = k;
  value = v;
}

template <typename X, typename Y>
X Entry<X,Y>::getKey() {
  return key;
}

template <typename X, typename Y>
Y Entry<X,Y>::getValue() {
  return value;
}

template class Entry<int,int>;
template class Entry<string,int>;
