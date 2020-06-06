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
		long long int x , y , a , b;

		cin >> x >> y ;
		cin >> a >> b;

		if (x > 0 && y > 0)
		{
			if (b > 2 * a)
			{
				cout << a*(x + y) << '\n';
			}

			else if (x > y)
			{
				cout << b*y + a*(x - y) << '\n';
			}

			else
			{
				cout << b*x + a*(y - x) << '\n' ;
			}
		}

		else
		{
			cout << a*(x + y) << '\n';
		}



	}
	return 0;
}
