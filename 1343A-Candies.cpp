#include<bits/stdc++.h>
using namespace std;
 
void cpc()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
 
}
 
int main()
{
	cpc();
	int t;
	cin >> t;
 
	while (t--)
	{
		int n;
		cin >> n;
 
 
 
 
 
		for (int k = 2; k < 30; ++k)
		{
			int b = ( 1 << k) - 1;
 
			if ( n % b == 0)
			{
				cerr << b << endl;
				cout << n / b << endl;
				break;
			}
 
 
 
 
		}
 
 
 
	}
	return 0;
}
