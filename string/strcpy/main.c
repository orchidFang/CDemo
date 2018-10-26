//
//  main.c
//  strcpy
//
//  Created by fanghao on 2018/10/25.
//  Copyright © 2018 fanghao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define BSIZE  10

int main(int argc, const char * argv[]) {

    char dstArray[BSIZE];
    memset(dstArray, 0, sizeof(dstArray));
    
    char const *src = "hello world!";
    //strcpy(dstArray, src);
    strncpy(dstArray, src, BSIZE);
    //当要复制的字符串长度大于目的字符串buffer长度时，字符串不以'\0'结尾,此时需要手动把最后一个字符设为'\0'。
    dstArray[BSIZE - 1] = '\0';
    
    printf("first method:\n");
    for (char *p = dstArray; *p != '\0'; p++) {
        printf("%c",*p);
    }
    printf("\n");
    
    printf("second method:\n");
    for (int i = 0; dstArray[i] != '\0'; i++) {
        printf("%c",dstArray[i]);
    }
    printf("\n");
    return 0;
}
