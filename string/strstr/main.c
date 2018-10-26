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
    
    char *p = NULL;
    char *last = NULL;
    size_t searchStrLength = strlen(s2);
    
    p = strstr(s1, s2);
    
    while (p != NULL) {
        last = p;
        p = strstr(last + searchStrLength, s2);
    }
    
    return last;
}

int main(int argc, const char * argv[]) {
    char *a = "hello,world! my world,hi";
    char *b = "world";

    char *p = strrstr(a, b);
    for (; *p != '\0'; p++) {
        printf("%c",*p);
    }
    printf("\n");
    
    return 0;
}
