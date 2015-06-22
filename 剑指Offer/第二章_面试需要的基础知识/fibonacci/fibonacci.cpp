#include "fibonacci.h"

int Solution::fibonacci(int n)  
{
    int num0 = 0;
    int num1 = 1;
    int num = 1;

    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    for (int i = 2; i < n; i++) {
        num = num0 + num1;
        num0 = num1;
        num1 = num;
    }
    return num;
}


 