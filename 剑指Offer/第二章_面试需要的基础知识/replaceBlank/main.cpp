#include<iostream>
#include<string>
#include"replaceBlank.h"
using namespace std;

int main()
{
	Solution *Solution_replaceBlank = new Solution();
    char str0[] = "  hello world    ";
    
    Solution_replaceBlank->replaceBlank(str0, strlen(str0));
    cout<<str0<<endl;
    return 0;
}
