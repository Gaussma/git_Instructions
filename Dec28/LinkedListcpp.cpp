#include "LinkedList.h"

#include <stdexcept>
#include <iostream>
using namespace std;

namespace MathFuncs
{
	LinkedList::LinkedList() {

		this->length = 0;

		this->head = NULL;

	}



	LinkedList::~LinkedList() {

		std::cout << "LIST DELETED"<<endl;

	}



	void LinkedList::add(int data) {//addFirst() actually 

		Node* node = new Node();

		node->data = data;

		node->next = this->head;

		this->head = node;

		this->length++;

	}



	int LinkedList::checkLength() {

		Node* head = this->head;

		int i = 0;

		while (head) {

			//std::cout << i << ": " << head->data << std::endl;

			head = head->next;

			i++;

		}

		return i;

	}

	bool LinkedList::find(int key) {
		Node * head = this->head;
		while (head) {
			if (head->data == key) {
				return true;
			}
			else {
				head = head->next;
			}
		}
		return false;
	}



	int LinkedList::get(int index) {

		Node* head = this->head;
		if (index == 0) {
			return head->data;
		}

		for (int i = 0; i < index; i++) {
			head = head->next;
		}

		return head->data;

	}
	int LinkedList::remove(int index) {
		Node* head = this->head;
		int res = 0;


		Node* preHead = new Node();
		preHead->next = this->head;

		//special case , head get deleted !  
	   //redefine head, head get deleted or not ? 
		if (index == 0) {
			res = this->head->data;
			this->head = this->head->next;
		}



		for (int i = 0; i <= index; i++) {

			if (i == index) {
				res = preHead->next->data;
				preHead->next = preHead->next->next;
				//delete happen  
				this->length--;

				return res;
			}
			preHead = preHead->next;
			//head = head->next; 

		}




		return res;
	}




}  

