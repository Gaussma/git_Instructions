#pragma once

#ifndef MathFuncsLib_LinkedList_h
#define MathFuncsLib_LinkedList_h
namespace MathFuncs
{

	class Node

	{

	public:

		Node* next;

		int data;

	};


	class LinkedList

	{

	public:

		int length;

		Node* head;



		LinkedList();

		~LinkedList();

		void add(int data);

		int checkLength();

		int get(int index);
		bool find(int key);
		int remove(int index);

	};
}





#endif