//Name:Ethan Thomas
//Class: CS 132 Section: A
//Binary Tree Project

#include "stdafx.h"
#include "Tree.h"
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int>storage = { 6, 9, 3, 5, 5, 7, 2, 10, 4, 1, 8 };
	Tree numTree;
	
	for (int i = 0; i < storage.size(); i++)
	{
		numTree.insert(storage[i]);
	}

	cout << numTree;
	system("pause");
    return 0;
}

//Output:
//checking left
//inserting TRUE
//checking left
//checking right
//inserting TRUE
//inserting FALSE
//checking right
//checking left
//inserting TRUE
//checking left
//checking left
//inserting TRUE
//checking right
//checking right
//inserting TRUE
//checking left
//checking right
//checking left
//inserting TRUE
//checking left
//checking left
//checking left
//inserting TRUE
//checking right
//checking left
//checking right
//inserting TRUE
//1 2 3 4 5 6 7 8 9 10
//Total Node Count is : 10