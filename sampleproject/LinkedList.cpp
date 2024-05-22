#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	removeAll();
}

void LinkedList::print()
{
	Node* current = head;
	std::cout << "Current List: ";
	while (current != nullptr)
	{
		std::cout << current->data << "\t";
		current = current->next;
	}
	std::cout << "\n" << std::endl;
}

int LinkedList::getLength()
{
	Node* current = head;
	int length = 0;
	while (current != nullptr)
	{
		length++;
		current = current->next;
	}
	return length;
}

void LinkedList::push_back(int data)
{
	if (head != nullptr)
	{
		Node* currentNode = head;
		Node* newNode = nullptr, *lastNode = nullptr;

		while (currentNode != nullptr)
		{
			lastNode = currentNode;
			currentNode = currentNode->next;
		}
			
		try
		{
			newNode = new Node(data);
		}
		catch (...)
		{
			return;
		}
		
		lastNode->next = newNode;
	}
	else
	{
		head = new Node(data);
	}
}

void LinkedList::pop_back()
{
	int length = getLength();
	if (length == 0)
	{
		return;
	}
	else if (length == 1)
	{
		delete head;
		head = nullptr;
	}
	else
	{
		Node* currentNode = head;
		Node* newNode = nullptr, *lastNode = nullptr;

		while (currentNode != nullptr)
		{
			lastNode = currentNode;
			currentNode = currentNode->next;
		}
		if (lastNode != nullptr)
		{
			lastNode->next = nullptr;
		}
		delete currentNode;
		currentNode = nullptr;
	}
}

void LinkedList::reverse()
{
	if (head != nullptr)
	{
		Node* currentNode = head;
		Node* previousNode = nullptr, *upcomingNode = nullptr;
		while (currentNode != nullptr)
		{
			upcomingNode = currentNode->next;
			currentNode->next = previousNode;
			previousNode = currentNode;
			currentNode = upcomingNode;
		}
		
		head = previousNode;
	}
}

void LinkedList::removeAll()
{
	Node* currentNode = head, *upcomingNode = nullptr;
	while (currentNode != nullptr)
	{
		
	}
}

int LinkedList::findIndex(int data)
{
	if (head != nullptr)
	{
		int index = -1, temp = 0;
		Node* currentNode = head;
		while (currentNode != nullptr)
		{
			if (data == currentNode->data)
			{
				index = temp;
				break;
			}
			temp++;
			currentNode = currentNode->next;
		}
		return index;
	}
	return -1;
}

Node* LinkedList::GetNodeAt(int index)
{
	int length = getLength();
	Node* resultNode = nullptr;
	if ((length == 0) || (index > length - 1))
	{
		return resultNode;
	}
	else if (length == 1)
	{
		return head;
	}
	else 
	{
		Node* currentNode = head;
		int count = 0;
		
		while (currentNode != nullptr)
		{
			if (count == index)
			{
				return currentNode;
			}
			count++;
			currentNode = currentNode->next;
		}
	}
	return resultNode;
}



void LinkedList::removeAt(int index)
{

}

int LinkedList::getMiddleNodeNum()
{
	return 0;
}
