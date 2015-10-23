#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int MAX = 0x7FFFFFFF;

unsigned long long fact(int n)
{
	unsigned long long result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

int solve1010(int a, int b)
{
	//(a+b-1) H b
	unsigned long long result = 1;
	unsigned long long f = 1;
	if (a - 1 > b)
	{
		for (int i = a + b - 1; i >= a; i--)
			result *= i;
		f = fact(b);
	}
	else
	{
		for (int i = a + b - 1; i >= b + 1; i--)
			result *= i;
		f = fact(a - 1);		
	}
	//printf("result, f : %llu, %llu\n", result, f);
	return result / f;


	//return fact(a + b - 1)/(fact(b)*fact(a-1));
	/*
	if (a == 2)
		return b + 1;
	if (a == 1)
		return 1;
	int result = 0;
	for (int i = 0; i <= b; i++)
		result += solve1010(a - 1, i);
	return result;
	*/
}



int solve1011(int lastvel, int x, int y)
{//y까지 가기 위해서 지금 x에 있고 여기까지 lastvel로 왔을 때에, y로 가기 위해 걸리는 턴 수.
	return 1;

}

//=========================Problems===========================
//=========================Problems===========================
//=========================Problems===========================
//=========================Problems===========================



void prob1009()
{
	int ans[10][4] = { {0,0,0,0},{1,1,1,1},{6,2,4,8},{1,3,9,7},{6,4,6,4},{5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9} };
	int a, b;
	cin >> a;
	cin >> b;
	
	a = a % 10;
	b = b% 4;

	printf("%d\n", ans[a][b]);
}

void prob1002()
{
	int x1, y1, r1, x2, y2, r2;
	cin >> x1;
	cin >> y1;
	cin >> r1;
	cin >> x2;
	cin >> y2;
	cin >> r2;

	int d_2 = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	if (r1 == r2&&x1 == x2&&y1 == y2)
	{
		printf("-1\n");
		return;
	}
	if (d_2 > (r1 + r2)*(r1 + r2))
	{
		printf("0\n");
		return;
	}
	if (d_2 == (r1 + r2)*(r1 + r2))
	{
		printf("1\n");
		return;
	}
	if (d_2 > (r1 - r2)*(r1 - r2))
	{
		printf("2\n");
		return;
	}
	if (d_2 == (r1 - r2)*(r1 - r2))
	{
		printf("1\n");
		return;
	}
	printf("0\n");
	return;
	

}

void prob1011()
{
	int x, y;
	cin >> x >> y;
	int togo = y - x;
	int ans=0;
	if (togo % 2)
		ans = solve1011(1, 1, y - x);
	else
		return;


}

void prob1010()
{
	int n, m;
	cin >> n;
	cin >> m;
	int a = n + 1;//14
	int b = m - n;//16

	int answer = solve1010(a, b);
	cout << answer << endl;
}

//=========================Problems===========================
//=========================Problems===========================
//=========================Problems===========================
//=========================Problems===========================


void prob01()
{

}


int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
		prob01();
}