//
//  main.c
//  strspn
//
//  Created by fanghao on 2018/10/26.
//  Copyright © 2018 fanghao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char *a = "7823,445,23";
    size_t len1 = strspn(a, "12345");
    size_t len2 = strcspn(a, "12345,");
    
    printf("len1:%lu,len2=%lu",len1,len2);
    
    return 0;
}
