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

int main()
{
	cpc();
	int t;
	cin >> t;

	while (t--)
	{
		int n, k, j;
		cin >> n;
		cin >> k;

		if (n > k)
		{
			int a = INT_MAX;
			for (int i = 1; i <= sqrt(n); i++)
			{
				if ((n % i) == 0)
				{
					if (i <= k) a = min(a, n / i);
					if ((n / i) <= k)
					{
						a = min(a, i);
					}
				}
			}

			cout << a << endl;
		}
		else if (n <= k)
		{
			cout << 1 << endl;
		}
	}


	return 0;
}
