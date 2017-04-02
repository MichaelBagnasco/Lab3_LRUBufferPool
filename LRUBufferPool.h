//
//  LRUBufferPool.h
//  Michael_Bagnasco_Lab3
//
//  Created by Michael Bagnasco on 4/2/17.
//  Copyright © 2017 MBagnasco. All rights reserved.
//
#include "BufferPoolADT.h"

#ifndef LRUBufferPool_h
#define LRUBufferPool_h

class LRUBufferPool: public BufferPoolADT{
public:
    LRUBufferPool();
    ~LRUBufferPool();
    void getBytes(char* space, int sz, int pos);
    void printBufferBlockOrder();
    int getLRUBlockID();
private:
};

#include <stdio.h>

#endif /* LRUBufferPool_h */
