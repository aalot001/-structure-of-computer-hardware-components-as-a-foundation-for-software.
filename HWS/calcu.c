#include <stdio.h>
#include <stdlib.h>


int calcu( int x, int y, int z){
    
    int t1 = y ^ z;
    int t2 = x << t1;
    int t3 = ~ x;
    int t4 = t3 - t2;
    return t4;
}

