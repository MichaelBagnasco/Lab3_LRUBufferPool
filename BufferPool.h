//
//  LRUBufferPool.h
//  Michael_Bagnasco_Lab3
//
//  Created by Michael Bagnasco on 4/2/17.
//  Copyright © 2017 MBagnasco. All rights reserved.
//
#include "BufferPoolADT.h"

#ifndef BufferPool_h
#define BufferPool_h

class BufferPool: public BufferPoolADT{
public:
    BufferPool();
    ~BufferPool();
    void getBytes(char* space, int sz, int pos);
    void printBufferBlockOrder();
    int getBlockID();
private:
};

#include <stdio.h>

#endif /* LRUBufferPool_h */
