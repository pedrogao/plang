#ifndef STRING_H
#define STRING_H

#include "object.h"
#include <string.h>

typedef struct _String
{
    Object object;
    size_t length;
    char *data;
} String;

String *string_create_by_length(size_t length);

String *string_create_by_str(const char *str);

void string_destroy(String *str);

int string_length(String *str);

String *string_concat(String *str1, String *str2);

#endif
