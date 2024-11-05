using namespace std;

#include <fstream>
#include <iostream>
#include "tree.h"
#include "Tinfo.h"
#include "stack.h"

node* insertNode(node* root, int key) {
    if (root == NULL) {
        node* newRoot = new node();
        newRoot->info = key;
        return newRoot;
    }
    if (key > root->info) {
        root->left = insertNode(root->left, key);
    }
    else {
        root->right = insertNode(root->right, key);
    }
    return root;
}
node* createTree(ifstream& in) {
    node* root = NULL;
    int x;
    while (in >> x) {
        root = insertNode(root, x); 
    }
    return root;
}

void DFS(node* root) {
    if (!root) return;
    elem* s = createStack();
    push(s, root);
    while (!isEmpty(s)) {

        node* p = pop(s);
        cout << p->info << " ";
        if (p->right)
            push(s, p->right);
        if (p->left)
            push(s, p->left);
    }
}


//удалить дерево сделать
