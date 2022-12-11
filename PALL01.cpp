#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,r,n,d,k;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    k=n;
	    r=0;
	    while(n>0)
	    {
	        d=n%10;
	        r=r*10+d;
	        n=n/10;
	    }
	    if(r==k)
	        cout<<"wins"<<endl;
	   else
	    cout<<"loses\n";
	}
	return 0;
}
