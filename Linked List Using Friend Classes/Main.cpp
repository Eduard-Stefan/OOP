#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;

int main()
{
	List list;
	int option;
	do
	{
		cout << "______________________________________________________________________" << endl << endl;
		cout << "The options are:" << endl << endl;
		cout << "0. Exit" << endl;
		cout << "1. Add node" << endl;
		cout << "2. Delete node" << endl;
		cout << "3. Eliminate the nodes which have the value lower than a chosen number" << endl;
		cout << "4. Calculate the average" << endl;
		cout << "5. Print the list" << endl;
		cout << "______________________________________________________________________" << endl << endl;
		cout << "Choose the option: ";
		cin >> option;
		switch (option)
		{
		case 0:
			return 0;
		case 1:
			cout << endl << "Choose the value of the new node: ";
			int x;
			cin >> x;
			list.AddNode(x);
			break;
		case 2:
			cout << endl << "Choose the node to be deleted: ";
			int y;
			cin >> y;
			list.DeleteNode(y);
			break;
		case 3:
			cout << endl << "Choose the number: ";
			int number;
			cin >> number;
			list.EliminateNodes(number);
			break;
		case 4:
			cout << endl;
			list.Average();
			cout << endl;
			break;
		case 5:
			cout << endl;
			list.PrintList();
			cout << endl;
			break;
		default:
			cout << endl << "Invalid option, please choose another one!" << endl;
			break;
		}
	} while (option != 0);
	return 0;
}