#include<iostream>
#include"anagram.h"
using namespace std;

int main()
{
	Solution *Solution_anagram = new Solution();
    string str0 = "DOG";
    string str1 = "GOD";
    string str2 = "GOD2";

    bool flag;
    flag = Solution_anagram->anagram(str0,str1);
    flag?(cout<<"true"):(cout<<"false");cout<<endl;
    flag = Solution_anagram->anagram(str0,str2);
    flag?(cout<<"true"):(cout<<"false");cout<<endl;
    return 0;
}
