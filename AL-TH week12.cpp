#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>


using namespace std;


vector<int> a[1001];
bool check[1001];

void dfs(int node)
{
	check[node] = true;
	printf("%d ", node);
	for (int i = 0; i < a[node].size(); i++)
	{
		int next = a[node][i];
		if (check[next] == false)
		{
			dfs(next);
		}
	}
}

bool checks[1001];

void bfs(int start)
{
	queue<int> q;

	q.push(start);
	checks[start] = true;
	
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
	printf("%d ", node);
		for (int i = 0; i < a[node].size(); i++)
		{
			int next = a[node][i];

			if (checks[next] == false)
			{
				checks[next] = true;
				q.push(next);
			}
		}
	}
}


int main()
{
	int n;
	int m;
	int v;

	scanf("%d %d %d", &n, &m, &v);

	for (int i = 0; i < m; i++)
	{
		int o, p;
		scanf("%d %d", &o, &p);

		a[o].push_back(p);
		a[p].push_back(o);
	}
	dfs(v);
	printf("\n");
	bfs(v);

}




vector<int> a[1001];
bool check[1001];

void dfs(int node)
{
	check[node] = true;
	for (int i = 0; i < a[node].size(); i++)
	{
		int next = a[node][i];
		if (check[next] == false)
		{
			dfs(next);
		}
	}
}


int main()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int o, p;
		scanf("%d %d", &o, &p);

		a[o].push_back(p);
		a[p].push_back(o);
	}

	int ans = 0;

	for (int i = 1; i <= n; i++)
	{
		if (check[i] == false)
		{
			dfs(i);
			ans++ ;
		}
	}
	printf("%d", ans);
}



bool check[1001];
vector<int> a[1001];

void bfs(int start)
{
	queue<int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		printf("%d ", node);
		for (int i = 0; i < a[node].size(); i++)
		{
			int next = a[node][i];

			if (check[next] == false)
			{
				check[next] = true;
				q.push(next);
			}
		}
	}
}


int main()
{
	int n;
	scanf("%d", &n);


}