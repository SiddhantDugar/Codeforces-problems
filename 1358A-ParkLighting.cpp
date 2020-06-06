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
		int n, m;
		cin >> n;
		cin >> m;
		long int answer = (n * m) / 2 ;

		if (n % 2 == 0 || m % 2 == 0)
		{
			cout << answer << endl;
		}
		else if (n % 2 != 0 && m % 2 != 0)
		{
			cout << answer + 1 << endl;
		}
	}


	return 0;
}
