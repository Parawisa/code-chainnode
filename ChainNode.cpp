#include "ChainNode.h"
#include <iostream>
using namespace std;

int ChainNode::cursize()
{
    return 0;
}

int ChainNode::maxSize()
{
    return 0;
}

ChainNode::ChainNode(int e ,ChainNode *p)
{
    element = e;
    next = p;
    cout << "[this: (e= " << element << ", p= " << next <<")]";
}

