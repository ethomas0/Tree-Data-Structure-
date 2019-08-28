//Name:Ethan Thomas
//Class: CS 132 Section: A
//Description: This is a binary tree which 
//takes numbers and sorts them from least 
//to greatest. It also prints using recurssion.

//Function Description:
// 1: This is the constructor
// 2: This is the destructor
// 3: This function inserts an integer into the tree.
//    It will return true if it was able to insert the 
//    number, otherwise it returns false.
// 4: This function searcehs the tree to see if
//    a number has already been inserted into the 
//    tree. It will return true if it found the matching
//	  value, otherwise it returns false
// 5:  This is the output operator that will output
//     the entire tree in ascending order when called.
// 6: This is the destructors helper that ensures the entire 
//     tree is deleted when it goes out of scope.


#pragma once
#include <fstream>
#include <iostream>
using namespace std;

class Tree
{
public:
	class Node
	{
	public:
		Node();
		Node(int val);
		int data;
		Node *left, *right;
	};
	Tree();//1
	~Tree();//1
	bool insert(int newVal);//3
	bool search(int newVal);//4
	friend ostream& operator << (ostream& str, const Tree& tree);//5

private:
	void print(ostream& ostr, Node *curNode) const;//6
	void destruct(Node *ptr);//7
	Node *root;
	int count;
};
