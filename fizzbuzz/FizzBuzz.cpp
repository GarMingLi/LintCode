#include "FizzBuzz.h"

string FizzBuzzSolution::to_string(int n)
{
  int m=n;
  int i=0,j=0;
  char s[int_max];
  char ss[int_max];
  while(m>0)
  {
    s[i++]= m%10 + '0';
    m/=10;
  }
  s[i]='\0';

  i=i-1;
  while(i>=0)
  {
    ss[j++]=s[i--];
  }
  ss[j]='\0';

  return ss;
}

vector<string> FizzBuzzSolution::fizzBuzz(int n) {
        vector<string> results;
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                results.push_back("fizz buzz");
            } else if (i % 5 == 0) {
                results.push_back("buzz");
            } else if (i % 3 == 0) {
                results.push_back("fizz");
            } else {
               results.push_back(to_string(i));
            }
        }
        return results;
}
