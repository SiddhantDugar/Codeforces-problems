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
		int a;
		int b;
		int c;
		int d;

		cin >> n;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;

		if (n * (a - b) > c + d)

			cout << "No" << endl;

		else if (n * (a + b) < c - d)

			cout << "No" << endl;

		else
			cout << "Yes" << endl;


	}

	return 0;
}
