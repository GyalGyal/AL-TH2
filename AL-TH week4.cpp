#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
	int n;
	int m;

	scanf(" %d %d", &n, &m);

	int x[1001];
	int y[1001];

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	sort(x, x + m);
	sort(y, y + m);


	int X;
	int Y;

	X = x[m / 2];
	Y = y[m / 2];

	int ans = 0;

	for (int i = 0; i < m; i++)
	{
		ans += abs(X - x[i]) + abs(Y - y[i]);
	}

	printf("%d", ans);
}

//=======================================================


struct student
{
	string name;
	int k;
	int e;
	int m;
};



bool cmp( student left, student right)
{
	if (left.k > right.k)
	{
		return true;
	}
	else if (left.k == right.k && left.e < right.e)
	{
		return true;
	}
	else if (left.k == right.k && left.e == right.e && left.m > right.m)
	{
		return true;
	}
	else
	{
		return false;
	}
}




int main()
{
	int n;

	scanf("%d", &n);

	student data[1001];

		string a;
		int b;
		int c;
		int d;

	for (int i = 0; i < n; i++)
	{
	
		cin >> a;
		scanf("%d %d %d", &b, &c, &d);

		data[i].name = a;
		data[i].k = b;
		data[i].e = c;
		data[i].m = d;
	}

	sort(data, data + n, cmp);

	for (int i = 0; i < n; i++)
	{
		cout << data[i].name;
		printf("\n");
	}

}

//===================================


struct Data
{
	int num;
	int color;
	int size;
};


bool cmp(Data left, Data right)
{
	return left.size < right.size;


}


int main()
{
	int n;
	scanf("%d", &n);


	Data ball[1001];
	
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		ball[i].color = a;
		ball[i].size = b;
		ball[i].num = i;
	}

	sort(ball, ball + n, cmp);


	int sum[1001];

	for (int i = n; i >=0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			sum[j] += ball[n - i].size;
		}
	}
}