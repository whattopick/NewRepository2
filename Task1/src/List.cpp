#include "List.h"

List::List()
{
    //ctor
    head_=nullptr;
    tail_=nullptr;
}

List::~List()
{
    //dtor
}

void List::addNode(int data)
{
    if(head_==nullptr)
    {
        Node * node = new Node(nullptr, nullptr, data);
        head_=node;
        tail_=node;
    }
    else
    {
        Node * node = new Node(tail_, nullptr, data);
        tail_->nextNode_=node;
        tail_=node;
    }
}

void List::removeNode()
{
    if(head_==tail_ && head_!=nullptr)
    {
        tail_=nullptr;
        head_=nullptr;
    }
    else if(head_!=tail_)
    {
        tail_=tail_->previousNode_;
        tail_->nextNode_=nullptr;
    }
}
