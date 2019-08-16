/*
	Subject: Linked Queue
	FileName: node.h
	Created Date: 2019-08-16
	Author: Dodo(rabbit.white@daum.net)
	Description:
*/

#pragma once

template <typename T>
class Node {

private:
	T data;
	Node<T>* next;

public:
	T getData();
	Node<T>* getNext();
	void setData(T data);
	void setNext(Node<T>* node);

};

#include "node.hpp"