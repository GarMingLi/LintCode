#include<iostream>
#include"atoi.h"
using namespace std;

int main()
{
	Solution *Solution_atoi = new Solution();
    string str0 = "123123123123123";
    string str1 = "123";
    string str2 = "-123";
    string str3 = "1.0";
    string str4 = "  123";
    string str5 = "  1234rrr   ";
    string str6 = "  010   ";
    string str7 = "1234567890123456789012345678901234567890";

    int num = Solution_atoi->atoi(str0);
    cout <<str0<<"=>"<<num<<endl;
    num = Solution_atoi->atoi(str1);
    cout <<str1<<"=>"<<num<<endl;
    num = Solution_atoi->atoi(str2);
    cout <<str2<<"=>"<<num<<endl;
    num = Solution_atoi->atoi(str3);
    cout <<str3<<"=>"<<num<<endl;
    num = Solution_atoi->atoi(str4);
    cout <<str4<<"=>"<<num<<endl;
    num = Solution_atoi->atoi(str5);
    cout <<str5<<"=>"<<num<<endl;
    num = Solution_atoi->atoi(str6);
    cout <<str6<<"=>"<<num<<endl;
    num = Solution_atoi->atoi(str7);
    cout <<str7<<"=>"<<num<<endl;
    return 0;
}
