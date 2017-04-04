//
//  BufferBlock.h
//  Michael_Bagnasco_Lab3
//
//  Created by Michael Bagnasco on 4/2/17.
//  Copyright © 2017 MBagnasco. All rights reserved.
//
#include "BufferBlockADT.h"

#ifndef BufferBlock_h
#define BufferBlock_h

#include <stdio.h>

class BufferBlock: public BufferblockADT{
public:
    BufferBlock();
    BufferBlock(char* data, int sz = 4096);
    ~BufferBlock();
    void getData(int pos, int sz, char* data);
    void setID(int);
    int getID() const;
    int getBlocksize() const;
    char* getBlock() const;
    void setBlock(char* blk);
    
private:
    int blockID;
    static int blockIDCount;
    char* blockPtr;
    char block[4096];
    int blockSize;
    int blockPos;
};

#endif /* BufferBlock_h */
