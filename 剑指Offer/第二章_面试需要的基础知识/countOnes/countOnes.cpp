#include "countOnes.h"

int Solution::countOnes(int num)  
{
    int count = 0;
    /***һ***
    for (int i = 0; i < 32; i++){
        if ((num>>i)&0x01 == 1) {
            count++;
        }
    }*/
    for (int i = 0; i < 32; i++){
        count += ((num>>i)&0x01);
    }
    return count;
}


 