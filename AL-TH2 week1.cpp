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

int left_num(string left, int n)
{
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		if ('0' <= left[i] && left[i] <= '9')
		{
			a += int(left[i]) - '0';
		}
	}
	return a;
}

int right_num(string right, int n)
{
	int b = 0;
	for (int i = 0; i < n; i++)
	{
		if ('0' <= right[i] && right[i] <= '9')
		{
			b += int(right[i]) - '0';
		}
	}
	return b;
}

bool cmp(string left, string right)
{

	if (left.size() != right.size())
	{
		return left.size() < right.size();
	}
	else if (left_num(left,left.size()) > right_num(right, right.size()))
	{
		return false;
	}
	else
	{
		return left > right;
	}

}

int main()
{
	int n;
	scanf("%d", &n);
	string s[51];

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, s + n, cmp);

	for (int i = 0; i < n; i++)
	{
		printf("\n");
		cout << s[i];
		
	}
	
}





int main()
{
	char str[100001];
	stack <char> s;
	string input;

	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		s.push(input[i]);

		if (!s.empty())
		{
			printf("NO");
			return 0;
		}
		else if (s.top() == '(' && str[i] == ')') {
		
		}


	}
		
		
}
