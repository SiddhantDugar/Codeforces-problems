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
		long long int n;
		long long int m;

		cin >> n;
		cin >> m;

		if (n == 1)
		{
			cout << '0' << endl;
		}

		else if (n == 2 )
		{
			cout << m << endl;
		}



		else if (n > 2)
		{
			cout << 2 * m << endl;
		}

	}

	return 0;
}
