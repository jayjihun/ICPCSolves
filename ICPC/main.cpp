#include <iostream>

using namespace std;

int MAX = INT32_MAX;

unsigned int solve1010(int a, int b)
{
	//added comment by desktop
	if (a == 2)
		return b + 1;
	if (a == 1)
		return 1;
	unsigned int result = 0;
	for (int i = 0; i <= b; i++)
		result += solve1010(a - 1, i);
	return result;
}



int solve1011(int lastvel, int x, int y)
{
	if (x > y)
		return MAX;
	if (x == y)
	{
		if (lastvel == 1)
			return 1;
		else
			return MAX;
	}
	if (lastvel <= 0)
		return MAX;
	int n1, n2, n3;
	n1 = solve1011(lastvel - 1, x + lastvel - 1, y);
	n2 = solve1011(lastvel, x + lastvel, y);
	n3 = solve1011(lastvel + 1, x + lastvel + 1, y);
	if (n1 == MAX&&n2 == MAX&&n3 == MAX)
		return MAX;
	return min(n1, n2, n3)+1;

}

void prob1011()
{
	int x, y;
	cin >> x;
	cin >> y;
	int 
}

void prob1010()
{
	int n, m;
	cin >> n;
	cin >> m;
	int a = n + 1;//14
	int b = m - n;//16

	unsigned int answer = solve1010(a, b);
	cout << answer << endl;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0;i < t; i++)
	{
		prob1010();
	}
}