#ifndef LISTS_H
#define LISTS_H

#include <string>

class List {
private:
      typedef struct node {
         std::string data;
         node * next;
      }* nodePtr;

      nodePtr head;

public:
      List();
      ~List();
      void addNode(std::string addData);
      void deleteNode(std::string delData);
      void printList();
};

#endif /* LIST_H*/