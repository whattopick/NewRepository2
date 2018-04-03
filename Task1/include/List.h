#ifndef LIST_H
#define LIST_H
#include "Node.h"


class List
{
    public:
        List();
        virtual ~List();
        Node * head_;
        Node * tail_;

        void addNode(int);
        void removeNode();

    protected:

    private:
};

#endif // LIST_H
