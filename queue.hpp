/*
	Subject: node.hpp
	Created Date: 2019-08-15
	Author: Dodo(rabbit.white@daum.net)
	Description:

*/

#pragma once
#include <iostream>

using namespace std;

template <typename T>
Queue<T>::Queue() {
	front = NULL;
	rear = NULL;
}

template <typename T>
Queue<T>::~Queue() {

	Node<T>* tmpNode = NULL;
	while (front != NULL) {
		tmpNode = front;
		front = front->getNext();
		delete[] tmpNode;
	}

}

template <typename T>
void Queue<T>::enqueue(T data) {

	Node<T>* createNode = NULL;
	Node<T>* curNode = NULL;

	createNode = new Node<T>();
	createNode->setData(data);
	createNode->setNext(NULL);

	if (front == NULL) {	
		front = createNode;
		rear = front;
	}
	else {
		rear->setNext(createNode);
		rear = rear->getNext();
	}
	
}

template <typename T>
T Queue<T>::dequeue() {
	Node<T>* tmpNode = front;
	T data = front->getData();

	front = front->getNext();
	delete[] tmpNode;

	return data;

}

template <typename T>
int Queue<T>::isEmpty() const {
	
	if (this->first != NULL)
		return -1;
	else
		return 0;

}