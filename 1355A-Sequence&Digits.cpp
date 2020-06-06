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


int MaxMin( long long int a)
{
	int largest = 0;
	int smallest = 9;
	while (a)
	{
		int r = a % 10;

		smallest = min(r, smallest) ;
		largest = max(r, largest);

		a = a / 10;
	}



	return largest * smallest ;
}

int main()
{
	cpc();
	int t;
	cin >> t;

	while (t--)
	{
		long long int a1;
		long long int K;

		cin >> a1;
		cin >> K;

		if (K == 0)
		{
			cout << a1 << endl;
		}

		else
		{
			for (int i = 1; i < K; i++)

			{
				a1 += MaxMin(a1) ;

				if (MaxMin(a1) == 0)
					break;

			}
			cout << a1 << endl;
		}
	}


	return 0;
}
