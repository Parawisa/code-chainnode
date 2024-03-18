#include <iostream>
#include "ChainNode.h"
using namespace std;

int main()
{
    cout << "66040946 PARAWISA PHO-ON" << endl;
    int number;
    cout << "Enter Your maxSize : " << endl;
    cin >> number;
    cout << endl;
    ChainNode a;
    cout << endl;
    ChainNode b(10, &a);
    cout << endl;
    ChainNode c(20, &b);
    cout << endl;
    ChainNode d(30, &c);
    cout << endl;
    
   

    return 0;
}

