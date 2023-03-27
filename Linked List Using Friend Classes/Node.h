#pragma once
class Node
{
public:
	Node();
	Node(int value);
private:
	Node* next;
	int value;
	friend class List;
};