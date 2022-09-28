#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,s,r;
	    cin>>n>>m;
	    if(m%2==0)
	    {
	        s=m/2;
	    }
	    else 
	    {
	        s=(m/2)+1;
	    }
	    if(n%2==0)
	    {
	        r=n/2;
	    }
	    else
	    {
	        r=(n/2)+1;
	    }
	    cout<<r*s<<endl;
	}
	return 0;
}
