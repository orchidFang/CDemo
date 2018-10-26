//
//  main.c
//  string
//
//  Created by fanghao on 2018/10/25.
//  Copyright © 2018 fanghao. All rights reserved.
//

#include <stdio.h>
#include <stddef.h>

size_t strlen(char const *string)
{
    size_t length = 0;
    while (*string++ != '\0') {
        length ++;
    }
    return length;
}

int main(int argc, const char * argv[]) {
    
    char *a = "hello world";
    printf("length of a :%lu\n",strlen(a));
    printf("size of a :%lu\n",sizeof(a));
    printf("address of string :%p\n",a);
    return 0;
}
