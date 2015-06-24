#include<iostream>
#include<string>
#include"singleton.h"
using namespace std;
Solution *Solution::singleton = NULL;
int main()
{
    Solution *A = Solution ::GetInstance();
    Solution *B = Solution ::GetInstance();
    cout<<A->GetTest()<<endl;
    cout<<B->GetTest()<<endl;
    Solution ::DestoryInstance();
    return 0;
}

