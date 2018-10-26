//
//  main.c
//  strcmp
//
//  Created by fanghao on 2018/10/26.
//  Copyright © 2018 fanghao. All rights reserved.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    
    char *a = "abaaaa";
    char *b = "abacaabc";
    
    //int result = strcmp(a, b);
    int result = strncmp(a, b, 8);
    if (result > 0){
        printf("a > b\n");
    }else if(result < 0){
        printf("a < b\n");
    }else{
        printf("a = b\n");
    }
    return 0;
}
