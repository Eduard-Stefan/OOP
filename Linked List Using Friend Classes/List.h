#pragma once
class Node;

class List
{
public:
	List();
	void AddNode(int value);
	void DeleteNode(int value);
	void EliminateNodes(int number);
	void Average();
	void PrintList();
private:
	Node* head;
};