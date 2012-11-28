#include <iostream>
#include "HashTable.h"

int main() {
  HashTable<int>* tester = new HashTable<int>(0);
  tester->insert("chicken",25);
  tester->insert("pasta",38);
  tester->print();
  tester->insert("pasta",5);
  tester->insert("lasagna",-5);
  tester->insert("nekcihc",55);
  tester->print();
  std::cout<<tester->find("nekcihc")<<std::endl;
  std::cout<<tester->find("chicken")<<std::endl;
  std::cout<<tester->find("paaassttaaa")<<std::endl;
  tester->remove("chicken");

  tester->print();
  return 0;
}
