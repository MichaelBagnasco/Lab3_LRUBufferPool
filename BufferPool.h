//
//  BufferPool.h
//  Michael_Bagnasco_Lab3
//
//  Created by Michael Bagnasco on 4/2/17.
//  Copyright © 2017 MBagnasco. All rights reserved.
//
#include "BufferPoolADT.h"
#include "BufferBlock.h"

#ifndef BufferPool_h
#define BufferPool_h

class BufferPool: public BufferPoolADT{
public:
    BufferPool();
    BufferPool(string filename, int poolSize = 5, int blockSize = 4096);
    ~BufferPool();
    void getBytes(char* space, int sz, int pos);
    void printBufferBlockOrder();
    int getLRUBlockID();
private:
    int size;
};

#include <stdio.h>

#endif /* BufferPool_h */
