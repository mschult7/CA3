#include <iostream>
#include <stdlib.h>
#include "LLC.h"
using namespace std;

  int main(int argc, char *argv[]){

  }
  LLC::Node newNode(std::string d){
    Node *n = new Node;
    n->data = d;
    n->next=NULL;
    if(first=NULL){
      first=n;
      last=n;
      n=NULL;
    } else{
        last->next = n;
        last=n;
      }
  }
  LLC::LLC(const LLC &list){
    Node *newF = newNode(&list.first.data);
    
  }
  LLC::LLC& operator=(const LLC& other){

  }
