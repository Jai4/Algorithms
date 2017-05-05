#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int n; cin >>n;
   int input;
  int temp(0); int sum(0);
  for(int i=0;i<n;i++)
  {
      cin>>temp;
       sum =temp+sum ;
  }
  
  cout << sum ;
  return 0;
}