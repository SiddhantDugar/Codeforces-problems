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
		int n;
		cin >> n;
		mk(arr, n, int);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int ans = 1000;
		for (int j = 0; j < n - 1 ; j++)
		{
			int diff = arr[j + 1] - arr[j];

			ans = min(diff, ans);

		}

		cout << ans << endl;
	}


	return 0;
}
