#include<bits/stdc++.h>

using namespace std;

#define mk(arr,n,type) type*arr=new type[n];
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
		mk(arr, n + 1 , int);

		for (int i = 1 ; i <= n; ++i)
			cin >> arr[i];

		int cnt[2] = {};

		for (int i = 1; i <= n; ++i)
			cnt[arr[i] % 2]++;
		if (cnt[0] && cnt[1])
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;

}

 
