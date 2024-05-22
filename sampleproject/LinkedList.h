#pragma once

#include <iostream>

struct Node
{
	int data;
	Node* next;

	Node(int data = 0)
	{
		this->data = data;
		this->next = nullptr;
	}
};

struct LinkedList
{
	Node* head;

	LinkedList();
	~LinkedList();

	void print();
	int getLength();
	void push_back(int data);
	void pop_back();
	void reverse();
	void removeAll();
	int findIndex(int data);
	Node* GetNodeAt(int index);
	void removeAt(int index);
	int getMiddleNodeNum();
};