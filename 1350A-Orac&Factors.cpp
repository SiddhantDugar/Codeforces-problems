#include<bits/stdc++.h>
#include<math.h>

using namespace std;

#define mk(arr,n,type) type*arr=new type[n];
void cpc()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif

}

int d(int a)
{
	int ans;
	for (int j = 2 ; j <= a ; j++)
	{
		if (a % j == 0)
		{
			ans = j;
			break;
		}
	}
	return ans;
}

int main()
{
	cpc();
	int t;
	cin >> t;

	while (t--)
	{
		long int n;
		long long int k;

		cin >> n;
		cin >> k;

		if (n % 2 == 0)
		{
			cout << n + 2 * k << endl;
		}
		else
		{

			cout << n + 2 * (k - 1) + d(n) << endl;
		}


	}

	return 0;
}
