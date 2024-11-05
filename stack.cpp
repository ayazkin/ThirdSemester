#pragma once
#include "Tinfo.h"
#include <iostream>

using namespace std;

bool isEmpty(elem* s) {
    return s == NULL;
}
elem* createStack() {
    return NULL;
}
void push(elem*& top, node* x) {
    elem* t = new elem;
    t->info = x;
    t->next = top;
    top = t;
}
node* pop(elem*& top) {
    node* n;
    if (!isEmpty(top)) {
        elem* t = top;
        n = t->info;
        top = top->next;
        delete t;
        return n;
    }
}