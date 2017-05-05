#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
 class reverse
 {
 	ll n;vector<ll> a;ll tem;
 	public:
 	void getinput()
    {
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		cin>>tem;
    		a.push_back(tem);
    	}
    	printreverse();
    }
    void printreverse()
    {
    	unsigned int u=a.size();
    	for(int i=u-1;i>=0;i--)
    	{
    		cout << a.at(i) << endl;
    	}
    }
 };
int main()
{
   
    reverse g;
    g.getinput();
    return 0;
}