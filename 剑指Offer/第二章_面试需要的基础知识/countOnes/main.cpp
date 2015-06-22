#include<iostream>
#include<string>
#include"countOnes.h"
using namespace std;

int main()
{
	Solution *Solution_countOnes = new Solution();  
    int num = Solution_countOnes->countOnes(888);
    cout<<num<<endl;
    return 0;
}
