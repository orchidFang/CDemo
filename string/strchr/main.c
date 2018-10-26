//
//  main.c
//  strchr
//
//  Created by fanghao on 2018/10/26.
//  Copyright © 2018 fanghao. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    char *a = "hello, world";
    char *b = strchr(a, 'o');
    b++;
    printf("%c\n",*b);
    return 0;
}
