#include <stdlib.h>
#include <stdio.h>

#include "mem.h"
#include "object.h"

//玩具版本。之后要改成自己的内存管理
Object *Alloc(size_t size)
{
    return (void *)malloc(size);
}

void Free(Object *obj)
{
    free(obj);
}