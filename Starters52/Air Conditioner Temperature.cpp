#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<=b && b>=c)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	
	
	return 0;
}
