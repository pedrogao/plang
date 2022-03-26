#include "string.h"
#include "mem.h"

String *string_create_by_length(size_t length)
{
    //申请内存
    size_t size = sizeof(Object) + sizeof(size_t) + sizeof(unsigned char) * (length + 1);
    String *pstr = (String *)Alloc(size);
    //设置字符串长度
    pstr->length = length;
    //设置数据指针
    pstr->data = (char *)(pstr + sizeof(Object) + sizeof(size_t));

    return pstr;
}

String *string_create_by_str(const char *str)
{
    size_t str_length = strlen(str);

    String *pstr = string_create_by_length(str_length);

    //拷贝数据
    strcpy(pstr->data, str);
    return pstr;
}

void string_destroy(String *str)
{
    Free((Object *)str);
}

int string_length(String *str)
{
    return str->length;
}

String *string_concat(String *str1, String *str2)
{
    size_t str_length1 = strlen(str1->data);
    size_t str_length2 = strlen(str2->data);
    size_t size = sizeof(Object) + sizeof(size_t) + sizeof(unsigned char) * (str_length1 + str_length2 + 1);
    //申请内存
    String *pstr = (String *)Alloc(size);
    //设置字符串长度
    pstr->length = str_length1 + str_length2;
    //设置数据指针
    pstr->data = (char *)(pstr + sizeof(Object) + sizeof(size_t));
    //拷贝数据
    strcpy(pstr->data, str1->data);
    strcpy(pstr->data + str_length1, str2->data);
    return pstr;
}