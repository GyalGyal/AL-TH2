#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <utility>
#include <stack>
#include <queue>
#include <cstring>
#include <string.h>
#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
	int n = 10;
	int a[11];
	int b[11];

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &b[i]);
	}
	int acount = 0;
	int bcount = 0;

	for (int i = 1; i <= n; i++)
	{
		if (a[i] > b[i])
		{
			acount++;
		}
		else if (a[i] < b[i])
		{
			bcount++;
		}
	}
	if (acount > bcount)
	{
		printf("A");
	}
	else if (acount < bcount)
	{
		printf("B");
	}
	else 
	{
		printf("D");
	}
}




int main()
{
	char a[100001];

	scanf("%s", &a);
	stack <int> s;
	int count = 0;
	for (int i = 0; i < a[i]; i++)
	{
		if (a[i] == '(')
		{
			s.push(i);
		}
		else
		{
			 if (s.top() + 1 == i)
			{
				s.pop();
				count += s.size();
			}
			 else
			 {
				 s.pop();
				 count += 1;
			 }

		
		}
	}
	printf("%d", count);
}



int main()
{
	int ans[500001];
	int n;
	scanf("%d", &n);
	stack<pair<int, int>> s;
	s.push({ 999,0 });
	int m;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);

		while (s.top().first < m)
		{
			s.pop();
		}
		ans[i] = s.top().num;
		s.push({ m, i + 1 });
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", ans[i]);
	}
}
