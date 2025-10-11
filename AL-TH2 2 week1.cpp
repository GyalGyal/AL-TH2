#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;



/*

int main()
{
	int n;
	scanf("%d", &n);
	
	int d[1000];

		d[1] = 1;
		d[2] = 2;
		d[3] = 4;


	for (int i = 4; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];
	
	}
	printf("%d", d[n]);
}

*/


int main()
{
	int n;

	scanf("%d", &n);

	int p[10000];
	for (int i = 0; i <= n; i++)
	{
		scanf("%d", &p[i]);
	}


	for (int i = 5; i <= n; i++)
	{
		p[i] = p[i - 1] + p[i - 2] + p[i - 3] + p[i - 4];
	}

	printf("%d", p[n]);
}