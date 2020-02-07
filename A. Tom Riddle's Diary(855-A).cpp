#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,f=0;
	cin >> n;
	string s[n];
	for(int i=0;i<n;i++)
		cin >> s[i];
	for (int i=0;i<n;i++)
	{
	   f=0;
	         for(int j=0;j<i;j++)
	          {
	              if(s[i]==s[j])
	               f++;
            }
	if(f>0)
	cout << "YES"<<endl;
	else
	cout << "NO"<<endl;
	}
    
}
 
