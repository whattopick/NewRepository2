#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node * previousNode_;
        Node * nextNode_;
        int data_;
        Node(Node *, Node *, int);
        virtual ~Node();

    protected:

    private:
};

#endif // NODE_H
