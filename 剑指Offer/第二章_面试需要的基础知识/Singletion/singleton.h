#include <iostream>
using namespace std;
class Solution {
private:
	Solution(){ m_Test = 10; }
	static Solution *singleton;
	int m_Test;
public:
	static Solution *GetInstance(); 
	static void DestoryInstance();
	int GetTest();
};

