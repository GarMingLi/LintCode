#include<iostream>
#include"CompareStrings.h"
using namespace std;

int main()
{
	Solution *Solution_CompareStr = new Solution();
    string str0 = "ABCD";
    string str1 = "A";
    string str2 = "AC";
    string str3 = "1.0";
    string str4 = "  123";
    string str5 = "  1234rrr   ";
    string str6 = "  010   ";
    string str7 = "1234567890123456789012345678901234567890";

    bool flag;
    flag = Solution_CompareStr->CompareStrings(str0,str1);
    flag?(cout<<"true"):(cout<<"false");cout<<endl;
    flag = Solution_CompareStr->CompareStrings(str0,str2);
    flag?(cout<<"true"):(cout<<"false");cout<<endl;
    return 0;
}
