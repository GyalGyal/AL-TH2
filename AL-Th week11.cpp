#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

/*
int main()
{
	int k;
	int ar[1001] = {0, };
	int dp[1001];
	int w;
	int max = 0;

	scanf("%d", &k);
	scanf("%d", &w);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &ar[i]);
	}

	for (int i = 0; i < k - w + 1; i++)
	{
		dp[i] = ar[i] + ar[i + w - 1];

		if (max < dp[i])
		{
			max = dp[i];
		}
	}
	printf("%d", max);
}



int main()
{
	int n;
	int m;

	int ar[1001] = { 0, };

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}

	sort(ar, ar + n);

	int i = 0;
	int j = n-1;

	int count = 0;

	while (i < j)
	{
		
			if (ar[i] + ar[j] == m)
			{
				count++;
				i++;
				j--;
			}
			else if (ar[i] + ar[j] < m)
			{
				i++;
			}
			else
			{
				j--;
			}
	}
	printf("%d", count);
}

*/



int main()
{
	int ar[10001] = {0, };
	int dp[1001] = {0, };

	int n; // 회전 초밥 벨트에 놓인 접시의 수
	int d; // 초밥의 가짓수
	int k; // 연속해서 먹는 접시의 수
	int c; // 쿠폰 번호

	scanf("%d %d %d %d", &n, &d, &k, &c);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}

	int ans = 0;

	dp[c] += 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
		dp[ar[j]] += 1;		
		}
		if (ans < sizeof(dp[1001]))
		{
			ans = sizeof(dp[1001]);
		}
	}
		dp[1001] = {0,};

	printf("%d", ans);
}