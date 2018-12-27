#define BOOST_TEST_MODULE mytests
#include <boost/test/included/unit_test.hpp>
#include <iostream>

#include <cstdlib>





class Node

{

public:

	Node* next;

	int data;

};



using namespace std;



class LinkedList

{

public:

	int length;

	Node* head;



	LinkedList();

	~LinkedList();

	void add(int data);

	int print();

	int Get(int index);
	bool find(int key);

};



LinkedList::LinkedList() {

	this->length = 0;

	this->head = NULL;

}



LinkedList::~LinkedList() {

	std::cout << "LIST DELETED";

}



void LinkedList::add(int data) {//addFirst() actually 

	Node* node = new Node();

	node->data = data;

	node->next = this->head;

	this->head = node;

	this->length++;

}



int LinkedList::print() {

	Node* head = this->head;

	int i = 0;

	while (head) {

		std::cout << i << ": " << head->data << std::endl;

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



int LinkedList::Get(int index) {
	
	Node* head = this->head;
	if (index == 0) {
		return head->data;
	}
	
	for (int i = 0; i < index; i++) {
		head = head->next;
	}

	return head->data; 

}



BOOST_AUTO_TEST_CASE(Length)
{

	LinkedList l1;
	l1.add(1);
	l1.add(2);
	l1.add(5);


	BOOST_CHECK(l1.length ==(l1.print()));
	
	cout << l1.length << endl; 


  BOOST_TEST(1 == 1);
  BOOST_TEST(true);
}
BOOST_AUTO_TEST_CASE(GetFunction) {
	LinkedList l2;
	l2.add(1);
	l2.add(2);
	l2.add(5);
	BOOST_CHECK(l2.Get(0) == 5);// 5 is the head->data.  
	
}
BOOST_AUTO_TEST_CASE(findFunction) {
	LinkedList l2;
	l2.add(1);
	l2.add(2);
	l2.add(5);
	BOOST_CHECK(l2.find(8) == true);//false
	//BOOST_CHECK(l2.find(5) == true);//true

}