#include<iostream>
#include"memory/MemoryManager.h"

using namespace std;

int main(int argc, char * argv[])
{
    cout << "hello p funk" << endl;
    int * test = new int;
    int * test2 = new int;
    delete test;
    delete test2;
    return 0;
}
