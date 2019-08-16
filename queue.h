/*
	Subject: Linked Queue
	FileName: queue.h
	Created Date: 2019-08-16
	Author: Dodo(rabbit.white@daum.net)
	Description:
*/

#pragma once

#ifndef QUEUE_H_
#define QUEUE_H_


template <typename T>
class Queue {

private:
	Node<T>* front;
	Node<T>* rear;

public:
	Queue();
	~Queue();
	void enqueue(T data);
	T dequeue();
	int isEmpty() const;

};

#include "queue.hpp"

#endif