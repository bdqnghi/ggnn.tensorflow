
int f(int x, int y, int n)
{
	if(n==0)
	{
		if(x==5&&y==5)
			return 1;
		else
			return 0;
	}
	else
		return f(x-1, y-1, n-1)+f(x-1, y, n-1)+f(x-1, y+1, n-1)+f(x, y-1, n-1)+
		f(x, y+1, n-1)+f(x+1, y-1, n-1)+f(x+1, y, n-1)+f(x+1, y+1, n-1)+2*f(x, y, n-1);
};
int main()
{
	int a[11][11], i, j, m, n;
	cin >> m >> n;
	for(i=1; i<10; i++)
		for(j=1; j<10; j++)
		{
			if(j==9)
				cout << m*f(i, j, n) << endl;
			else
				cout << m*f(i, j, n) << " ";
		}
	return 0;
}