#ifndef _CHAINNODE_H_
#define _CHAINNODE_H_
#include "iostream"

class ChainNode
{
public:
    int element;
    ChainNode *next;
    

public:
    /*ChainNode();
    ChainNode(int e);
    ChainNode(int e , ChainNode *n); */
    int maxSize();
    int cursize();
    ChainNode(int e =0 , ChainNode *p = NULL);
    

};

#endif 