#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;

List::List() :head(nullptr)
{}

void List::AddNode(int value)
{
    Node* new_node = new Node(value);
    if (head == nullptr)
        head = new_node;
    else
    {
        Node* current_node = head;
        while (current_node->next != nullptr)
            current_node = current_node->next;
        current_node->next = new_node;
    }
}

void List::DeleteNode(int value)
{
    if (head == nullptr)
        cout << endl << "The node couldn't be deleted because the list is already empty!" << endl;
    else
    {
        Node* current_node = head;
        Node* previous_node = new Node();
        if (head->value == value) 
        {
            head = head->next;
            delete current_node;
        }
        else
        {
            while (current_node->value != value && current_node->next != nullptr)
            {
                previous_node = current_node;
                current_node = current_node->next;
            }
            if (current_node->next == nullptr && current_node->value != value)
                cout << endl << "The node doesn't exist in the list!" << endl;
            else
            {
                previous_node->next = current_node->next;
                delete current_node;
            }
        }
    }
}

void List::EliminateNodes(int value)
{
    if (head == nullptr)
        cout << endl << "There are no nodes to be eliminated because the list is already empty!" << endl;
    else
    {
        Node* current_node = head;
        Node* previous_node = new Node();
        while (current_node != nullptr)
        {
            previous_node = current_node;
            current_node = current_node->next;
            if (previous_node->value < value)
                DeleteNode(previous_node->value);
        }
    }
}

void List::Average()
{
    if (head == nullptr)
        cout << "The average can't be calculated because the list is empty!";
    else
    {
        float sum = 0;
        float number_of_nodes = 0;
        Node* current_node = head;
        while (current_node != nullptr)
        {
            sum += current_node->value;
            number_of_nodes++;
            current_node = current_node->next;
        }
        cout << "The average is: " << sum / number_of_nodes;
    }
}

void List::PrintList()
{
    if (head == nullptr)
        cout << "The list is empty!";
    else
    {
        Node* current_node = head;
        cout << "The list is: ";
        while (current_node != nullptr)
        {
            cout << current_node->value << " ";
            current_node = current_node->next;
        }
    }
}