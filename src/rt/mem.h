/**
 * 与内存管理有关的功能
 * */

#ifndef MEM_H
#define MEM_H

#include <stdio.h>
#include "object.h"

//申请相应大小的内存
Object *Alloc(size_t size);

//释放内存
void Free(Object *obj);

#endif
