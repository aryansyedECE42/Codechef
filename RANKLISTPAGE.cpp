#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    int count=0;
	    for(int i=1;i<=x;i+=25)
	    {
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
