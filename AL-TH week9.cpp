#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

/*
int main()
{

	int m;
	int n;
	scanf("%d %d", &m, &n);

	int p[100];
	int pn = 0;
	bool c[101] = {false, };
	for (int i = 2; i <= 100; i++)
	{
		if (c[i] == false)
		{
			p[pn++] = i;
			for (int j = i * i; j <= n; j += i)
			{
				c[j] = true;
			}
		}

	}

	for (int i = m; i <= n; i++)
	{
		if (c[i] == false)
		{
			printf("%d\n", i);
		}
	}


	
}



int gcd(int a, int b) {
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int main()
{
	int n;
	
	int t[1001];

	int s[1001];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t[i]);
	}

	for (int i = 0; i < n-1; i++)
	{
		s[i] = t[i + 1] - t[i];
	}

	int ans = 0;

	for (int i = 0; i < n - 1; i++)
	{
		ans += (s[i] / gcd(s[i], s[i + 1])) - 1;
	}

	printf("%d", ans);
}

*/


int main()
{
	int w, h;
	int p, q;
	int t;

	scanf("%d %d %d %d %d", &w, &h, &p, &q, &t);

	int x, y;

	x = (p + t) % (w * 2);
	if ((p + t) < (w * 2))
	{
		x = (w * 2) % (p + t);
	}

	y = (q + t) % (h * 2);
	if ((q + t) < (h * 2))
	{
		x = (h * 2) % (q + t);
	}
 

	printf("%d %d", x, y);

}
