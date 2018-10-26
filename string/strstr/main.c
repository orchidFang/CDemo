//
//  main.c
//  strstr
//
//  Created by fanghao on 2018/10/26.
//  Copyright © 2018 fanghao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char *strrstr(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL || *s1 == '\0' || *s2 == '\0') {
        return NULL;
    }
    
    char *current = NULL;
    //last 为上一次在s1中匹配s2的指针位置
    char *last = NULL;
    
    current = strstr(s1, s2);
    
    while (current != NULL) {
        last = current;
        current = strstr(last + 1, s2);
    }
    
    return last;
}

int main(int argc, const char * argv[]) {
    char *a = "hello,sss! my ss,hi";
    char *b = "ss";

    char *p = strrstr(a, b);
    for (; *p != '\0'; p++) {
        printf("%c",*p);
    }
    printf("\n");
    
    return 0;
}
