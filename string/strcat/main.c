//
//  main.c
//  strcat
//
//  Created by fanghao on 2018/10/26.
//  Copyright © 2018 fanghao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char dstArray[10];
    memset(dstArray, 0, sizeof(dstArray));
    strcat(dstArray, "Hello ");
    //strcat(strcat(dstArray, "fanghao"), "lanjuan");
   // strcat(dstArray, "world");
    strncat(dstArray, "world", 3);
    for (int i=0; dstArray[i] != '\0'; i++) {
        printf("%c",dstArray[i]);
    }
    printf("\n");
    
    return 0;
}
