#include <cstdlib>
#include "List.h"

using namespace std;

int main(int argc, char ** argv) {
      List testList;


      testList.addNode("abc");
      testList.addNode("def");
      testList.addNode("xyz");
      testList.printList();
      
      testList.deleteNode("def");
      testList.printList();

      testList.deleteNode("Not there...");
       testList.printList();
    
      testList.deleteNode("xyz");
      testList.printList();

      testList.deleteNode("abc");
      testList.printList();
      return 0;
}