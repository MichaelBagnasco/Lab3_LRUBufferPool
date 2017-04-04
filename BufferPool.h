//
//  BufferPool.h
//  Michael_Bagnasco_Lab3
//
//  Created by Michael Bagnasco on 4/2/17.
//  Copyright © 2017 MBagnasco. All rights reserved.
//
#include "BufferPoolADT.h"
#include "BufferBlock.h"
#include <fstream>

#ifndef BufferPool_h
#define BufferPool_h

class BufferPool: public BufferPoolADT{
public:
    BufferPool();
    BufferPool(string filename, int poolSize = 5, int blockSize = 4096);
    ~BufferPool();
    void getBytes(char* space, int sz, int pos);
    void printBufferBlockOrder();
    void printBuffer(ofstream&);
    int getLRUBlockID();
private:
    int size;
    BufferBlock Pool[5];
    BufferBlock* Registry[5];
    BufferBlock* tempRegPtr;
    fstream fin;
};

#include <stdio.h>

#endif /* BufferPool_h */
