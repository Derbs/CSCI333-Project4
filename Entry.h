#ifndef __ENTRY_H__
#define __ENTRY_H__

#include <string>

using std::string;

template <typename Y> 
class Entry {
  private:
    string key;
    Y value;

  public:
    Entry(string k, Y v);
    string getKey();
    Y getValue();
};
#endif
