#include <iostream>
using namespace std;

int digit(int n){
    int sum=0;
    while(n>0){
     int a= n%10;
     sum=sum+a;
     n=n/10;
    }
    return sum;
}



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	 int p= digit(n);
	  
	  if(p%2==0){
	      while(p%2==0){
	          n=n+1;
	       p= digit(n);
	      }
	      cout<<n<<endl;
	  }
	   else{
	      while(p%2!=0){
	          n=n+1;
	       p= digit(n);
	      }
	      cout<<n<<endl;
	  }
	  
	}
	return 0;
}
