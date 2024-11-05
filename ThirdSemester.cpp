#pragma once
#include <iostream>
#include "Tinfo.h"
#include "stack.h"
#include "tree.h"
#include <fstream>

using namespace std;

int main()
{
    cout << "Hello World!\n";
    ifstream in("in.txt");
    node* tree = createTree(in);
    DFS(tree);
    deleteTree(tree);
    DFS(tree);
}
