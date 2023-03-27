#include <iostream>
#include "Node.h"

using namespace std;

Node::Node() :next(nullptr), value(0)
{}

Node::Node(int value) :next(nullptr), value(value)
{}