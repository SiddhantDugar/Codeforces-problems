#include<bits/stdc++.h>
#include<math.h>

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
		long long int n;


		cin >> n;


		if (n == 1)
		{
			cout << '0' << endl;

		}

		else
		{

			cout << (n * (n - 1) * (n + 1)) / 3 << endl;
		}
	}

	return 0;
}
