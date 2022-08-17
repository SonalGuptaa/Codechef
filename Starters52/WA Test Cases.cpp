#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	  
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    string s;
	    cin>>s;
	    vector<int> v;
	    for(int j=0;j<n;j++)
	    {
	        if(s[j]=='0')
	        {
	            v.push_back(arr[j]);
	        }
	    }
	   // sort(arr,arr+n);
	   sort(v.begin(),v.end());
	   cout<<v[0]<<endl;
	   //cout<<v[0]<<endl;
	}
	return 0;
}
