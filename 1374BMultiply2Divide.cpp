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
		long long int n, num;
		cin >> n;
		num = n ;

		long long int count2 , count3 ;
		count2 = 0;
		count3 = 0;

		while (num % 2 == 0)
		{
			num /= 2;
			count2++ ;
		}

		while (num % 3 == 0)
		{
			num /= 3;
			count3++ ;
		}

		if (num == 1 && count3 >= count2)
		{
			cout << count2 + 2 * (count3 - count2) << endl;
		}

		else
		{
			cout << "-1" << endl;
		}

	}
	return 0;
}
