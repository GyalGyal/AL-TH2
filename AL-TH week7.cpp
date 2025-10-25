#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


/*
int main()
{
	int a[301];
	int d[301][3];

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}

	d[1][1] = a[1];

	for (int i = 2; i <= n; i++)
	{
		d[i][2] = d[i - 1][1] + a[i];

		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + a[i];
		
	}

	printf("%d", max(d[n][1], d[n][2]));

}


*
int main()
{
	int n;
	scanf("%d", &n);

	int a[1000][4];
	int d[1000][4];

	for (int i = 1; i <= n ; i++)
	{
		cin >> a[i][1] >> a[i][2] >> a[i][3];
	}

	


	d[0][1] = 0;
	d[0][2] = 0;
	d[0][3] = 0;

	for (int i = 1; i <= n; i++)
	{
		d[i][1] = min(d[i - 1][2], d[i - 1][3]) + a[i][1];

		d[i][2] = min(d[i - 1][1], d[i - 1][3]) + a[i][2];

		d[i][3] = min(d[i - 1][1], d[i - 1][2]) + a[i][3];
	}

	printf("%d", min(d[n][1], min(d[n][2], d[n][3])));

}


*/


int main()

{
	int a, b, c, d, n;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &n);


	int d[0] = 1;



}









