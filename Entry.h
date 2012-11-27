#ifndef __ENTRY_H__
#define __ENTRY_H__

#include <string>

using std::string;

template <typename X, typename Y> 
class Entry {
  private:
    X key;
    Y value;

  public:
    Entry(X k, Y v);
    X getKey();
    Y getValue();
    
};
#endif
