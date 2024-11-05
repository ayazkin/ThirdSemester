#pragma once
#include <iostream>
struct node {
	int info;
	node* left = NULL;
	node* right = NULL;
};
struct elem {
	node* info;
	elem* next;
};
