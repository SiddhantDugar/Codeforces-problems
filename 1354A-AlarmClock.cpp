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
		long long int a, b, c, d;

		cin >> a >> b >> c >> d;

		if (b >= a)
		{
			cout << b << endl;
		}

		else
		{
			if (c <= d)
			{
				cout << "-1" << endl;
			}

			else
			{

				long long int sleep_req = a - b;

				long long int time = sleep_req / (c - d) ;
				long long int rem = sleep_req % (c - d);

				if (rem != 0)
					time++ ;

				cout << b + (c * time)  << endl;
			}
		}
	}

	return 0;
}
