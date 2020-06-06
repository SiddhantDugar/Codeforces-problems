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
		int a, b;
		cin >> a;
		cin >> b;

		int n;

		if (a < b)
			swap(a, b);
		n = max(a, 2 * b);

		cout << n*n << endl;



	}

	return 0;
}
