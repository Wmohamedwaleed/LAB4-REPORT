#ifndef TREE_H
#define TREE_H
#include "Node.h"
using namespace std;

class Tree
{
    Node * root;

public:

    Tree() {
        root = NULL;
    }

    void add(int data) {
        Node * newNode = new Node(data);
        Node * parent = NULL;

        if (root == NULL) {
            root = newNode;
        }
        else {
            Node * current = root;
            while (current != NULL) {
                parent = current;
                if (data > current->data) {
                    current = current->Right;
                }
                else {
                    current = current->Left;
                }
            }
            if (data > parent->data) {
                parent->Right = newNode;
            }
            else {
                parent->Left = newNode;
            }
        }
    }


    int getMaxDepth() {
        return findmax(root);
    }

private:
    int findmax(Node* node) {
        if (node == NULL) {
            return 0;
        }

        int left = findmax(node->Left);
        int right = findmax(node->Right);

        if (left > right) {
             return left + 1;
        } else {
    return right + 1;
}

}

public:
    ~Tree() {}

};

#endif // TREE_H
