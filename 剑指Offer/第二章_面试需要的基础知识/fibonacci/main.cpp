#include<iostream>
#include<string>
#include"fibonacci.h"
using namespace std;

int main()
{
	Solution *Solution_fibonacci = new Solution();  
    int num = Solution_fibonacci->fibonacci(10);
    cout<<num<<endl;
    return 0;
}

