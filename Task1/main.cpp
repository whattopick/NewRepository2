#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;

int main()
{
    List * myList = new List();
    myList->addNode(10);
    myList->addNode(20);
    myList->addNode(30);
    Node * myIterator = myList->head_;
    while(myIterator!=nullptr){
        cout<<myIterator->data_<<endl;
        myIterator=myIterator->nextNode_;

    }
    myList->removeNode();
    myIterator=myList->head_;
    while(myIterator!=nullptr){
        cout<<myIterator->data_<<endl;
        myIterator=myIterator->nextNode_;

    }
    myList->removeNode();
    myList->removeNode();
    myList->removeNode();
    myIterator=myList->head_;
    while(myIterator!=nullptr){
        cout<<myIterator->data_<<endl;
        myIterator=myIterator->nextNode_;

    }
    return 0;
}
