//*********************************
//* file?1.cpp
//* description: ????
//* author: ?? 1200012858		
//* date: 2012-12-1
//*********************************
int decompose(int x, int y);
int main ()
{
	int n, m;
	cin >> n;
	for (int j = 1; j <= n; j++)
	{
		cin >> m;		
		cout << decompose(m, 2) << endl;
	}
	return 0;
}
int decompose(int x, int y)
{
	int sum = 1,b;
	b = (int)sqrt(x);
	if (x == 1) return 0;
	for (int i = y; i <= b; i++)
	{
		if (x % i == 0)
		{	
			 sum = sum + decompose(x / i, i);
		}
	}
	return sum;
}
