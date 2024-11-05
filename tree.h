#pragma once
#include "Tinfo.h"
#include "stack.h"
#include <fstream>
#include <iostream>

using namespace std;

node* createTree(ifstream& in);
node* insertNode(node* root, int key);
void DFS(node* root);
void deleteTree(node*& root);
    