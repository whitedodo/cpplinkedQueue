/*
	Subject: Linked Queue
	FileName: node.hpp
	Created Date: 2019-08-15
	Author: Dodo(rabbit.white@daum.net)
	Description:
*/

#pragma once
#include <iostream>

using namespace std;

template <typename T>
T Node<T>::getData() {
	return this->data;
}

template <typename T>
Node<T>* Node<T>::getNext() {
	return this->next;
}

template <typename T>
void Node<T>::setData(T data) {
	this->data = data;
}

template <typename T>
void Node<T>::setNext(Node<T>* next) {
	this->next = next;
}