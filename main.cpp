#include <iostream>
//#include "system.h"
#include <vector>
#include <string>
#include "myList.h"
int main(){
  //System system("text.txt");
  //system.run();
  PC *p = new PC;
  p->add(0,0);
  p->add(1,1);
  p->add(2,5);
  p->add(6,9);
  p->add(5,10);
  p->print();
  p->removeNode(0,0);
  p->removeNode(5,10);
  p->print();
  p->delNodes();
  p->print();
  return 0;
  
}