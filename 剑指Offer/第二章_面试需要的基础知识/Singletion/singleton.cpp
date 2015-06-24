#include "singleton.h"

Solution *Solution::GetInstance()
{
	if (singleton == NULL )
	{
		singleton = new Solution ();
	}
	return singleton;
}
 
void Solution::DestoryInstance()
{
	if (singleton != NULL )
	{
		delete singleton;
		singleton = NULL ;
	}
}

int Solution::GetTest()
{
	return m_Test++;
}