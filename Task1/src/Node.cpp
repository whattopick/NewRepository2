#include "Node.h"

Node::Node(Node * previousNode, Node * nextNode, int data)
{
    //ctor
    previousNode_=previousNode;
    nextNode_=nextNode;
    data_=data;
}

Node::~Node()
{
    //dtor
}
