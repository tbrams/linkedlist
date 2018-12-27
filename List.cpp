#include <cstdlib>
#include <iostream>
#include <string>
#include "List.h"


List::List(){
      std::cout << "Constructor invoked\n";
      head=NULL;
};

List::~List(){
    std::cout << "Destructor invoked\n";
}

void List::addNode(std::string addData){
      nodePtr n = new node;
      n->data=addData;
      n->next=NULL;

      if (head!=NULL) {
            nodePtr curr=head;
            while (curr->next != NULL) {
                  curr=curr->next;
            }
            curr->next = n;
      } else {
            head=n;
      }
};

void List::deleteNode(std::string delData) {
      std::cout << "DeleteNode(\"" << delData << "\"):\n";
      nodePtr delPtr = NULL;
      nodePtr temp = head;
      nodePtr curr = head;

      while (curr!=NULL && (curr->data!=delData)){
            temp=curr;
            curr=curr->next;
      }
      if (curr==NULL) {
         std::cout << "\"" << delData << "\"" <<  " was not in the list\n";
         delete delPtr;

      } else {
            delPtr = curr;
            curr = curr->next;
            temp->next=curr;
            if (delPtr==head) {
                  head=head->next;
                  temp=NULL;
            }
            delete delPtr;
            std::cout << "The value \"" << delData << "\" was deleted\n";
      }
};


void List::printList(){
      std::cout << "List contents:\n";
      nodePtr curr=head;
      while (curr!=NULL) {
            std::cout << curr->data << std::endl;
            curr=curr->next;
      }
      std::cout << std::endl;
};