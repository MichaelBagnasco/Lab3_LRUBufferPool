//
//  BufferBlock.cpp
//  Michael_Bagnasco_Lab3
//
//  Created by Michael Bagnasco on 4/2/17.
//  Copyright © 2017 MBagnasco. All rights reserved.
//

#include "BufferBlock.h"

BufferBlock::BufferBlock()
{
    blockPtr = block;
}

BufferBlock::BufferBlock(char* data, int sz)
{
    blockPtr = block;
}


BufferBlock::~BufferBlock()
{
    
}

void BufferBlock::getData(int pos, int sz, char* data)
{
    for (int i = 0; i < sz; i++) {
        data[i] = block[pos];
        pos++;
    }
}

void BufferBlock::setID(int id)
{
    blockID = id;
}

int BufferBlock::getID() const
{
    return blockID;
}

int BufferBlock::getBlocksize() const
{
   return blockSize;
}

char* BufferBlock::getBlock() const
{
    return blockPtr;
}

void BufferBlock::setBlock(char* blk)
{
    for (int i = 0; i < 4096; i++) {
        *(blockPtr + i) = blk[i];
    }
    
}




