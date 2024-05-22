// sampleproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "sampleproject.h"

int main()
{
   

}

void FrameWork::performReverseLinkedList()
{
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.push_back(50);

    std::cout << "Before Reverse:";
    list.print();

    list.reverse();

    std::cout << "After Reverse:";
    list.print();

    list.removeAll();
}

void FrameWork::performPrintLinkedList()
{
}

void FrameWork::performFindIndexLinkedList()
{
}

void FrameWork::performGetNodeAtLinkedList()
{
}

void FrameWork::performRemoveAllLinkedList()
{
}

void FrameWork::performRemoveAtLinkedList()
{
}

void FrameWork::performGetMiddleNodeLinkedList()
{
}
