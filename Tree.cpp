#include "stdafx.h"
#include <iostream>
#include "Tree.h"
using namespace std;

Tree::Node::Node()
{
	left = right = nullptr;
	data = 0;
}

Tree::Node::Node(int val)
{
	left = right = nullptr;
	data = val;
}

Tree::Tree()
{
	count = 0;
	root = nullptr;
}

Tree::~Tree()
{
	destruct(root);
}

bool Tree::insert(int newVal)
{
	Node *temp, *tempPrev;
	temp = root;
	tempPrev = nullptr;
	
	

	if (!search(newVal))
	{

		while (temp != nullptr)
		{
			tempPrev = temp;
			if (newVal < temp->data)
			{
				temp = temp->left;
				cout << "checking left" << endl;
			}
			else
			{
				temp = temp->right;
				cout << "checking right" << endl;
			}
		}

		if (tempPrev == nullptr)
		{
			root = new Node(newVal);
			cout << "insert in empty tree" << endl;
			++count;
			return true;
		}
		else
		{

			if (newVal < tempPrev->data)
			{
				tempPrev->left = new Node(newVal);
				++count;
				cout << "inserting TRUE" << endl;
			}
			else
			{
				tempPrev->right = new Node(newVal);
				++count;
				cout << "inserting TRUE" << endl;
			}
		}
		
		return true;
	}
	else
	{
		cout << "inserting FALSE" << endl;
		return false;
	}
}

bool Tree::search(int newVal)
{
	Node *temp;
	temp = root;
	while ((temp != nullptr) && (temp->data != newVal))
	{
		if (newVal < temp->data)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->right;
		}
	}
	if (temp == nullptr)
	{
		return false;
	}
	else
	{
		return true;
	}

	return false;
}

void Tree::print(ostream & ostr, Node * curNode) const
{
	if (curNode == nullptr)
	{
		return;
	}
	print(ostr, curNode->left);		
	cout << curNode->data << " ";
	print(ostr, curNode->right);
	
		
}

void Tree::destruct(Node* ptr)
{
	if (ptr->left != nullptr)
	{
		destruct(ptr->left);
	}
	if (ptr->right != nullptr)
	{
		destruct(ptr->right);
	}
		delete ptr;		
}

ostream & operator<<(ostream &str, const Tree & tree)
{
	tree.print(str, tree.root);
	str << endl << "Total Node Count is: " << tree.count << endl;
	return str;
	
}
