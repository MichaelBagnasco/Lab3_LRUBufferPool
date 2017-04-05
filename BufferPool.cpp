//
//  BufferPool.cpp
//  Michael_Bagnasco_Lab3
//
//  Created by Michael Bagnasco on 4/2/17.
//  Copyright © 2017 MBagnasco. All rights reserved.
//

#include "BufferPool.h"

BufferPool::BufferPool()
{
    
}

BufferPool::BufferPool(string filename, int poolSize, int blockSize)
{
    char tempBlock[4096];
    
    fin.open(filename, ios::in | ios::binary);
    
    if (fin.is_open()) {
        for (int i = 0; i < poolSize; i++) {
            fin.seekg(i * 4096);
            fin.read(tempBlock, 4096);
            Pool[i].setBlock(tempBlock);
            Registry[i] = &Pool[i];
            Pool[i].setID(i);
        }
    }
    else
        cout << "Could not open file" << endl;
}

BufferPool::~BufferPool()
{

}

void BufferPool::getBytes(char* space, int sz, int pos)
{
    char tempBlock[4096];
    int temp = pos / 4096;
    for (int i =0; i < 5; i++) {
        if (Registry[i]->getID() == temp) {
            Registry[i]->getData(pos % 4096, sz, space);
            tempRegPtr = Registry[i];
            for (int j = i; j > 0; j--)
                Registry[j] = Registry[j-1];
            Registry[0] = tempRegPtr;
            return;
        }
    }
    fin.seekg(temp * 4096);
    fin.read(tempBlock, 4096);
    Registry[4]->setBlock(tempBlock);
    Registry[4]->setID(pos/4096);
    Registry[4]->getData(pos % 4096, sz, space);
    tempRegPtr = Registry[4];
    for (int i = 4; i > 0; i--)
        Registry[i] = Registry[i-1];
    Registry[0] = tempRegPtr;
    
    
}

void BufferPool::printBufferBlockOrder()
{
    cout << "My buffer block order for the most recently used to LRU is:" << endl;
    cout << "        " ;
    for (int i = 0; i < 5; i++)
        cout << Registry[i]->getID() << "  ";
    
    cout << endl << endl;
}

int BufferPool::getLRUBlockID()
{
    return 0;
}



