/*????????pass?????????????????*/
int main ( )
{
	int x1, y1, x[11] = {0}, y[11] = {0}, i, j, ex, ey;
	void f(int z[11]);
	int g(int w[11]);
	cin >> x1 >> y1;
	x[0] = x1;
	y[0] = y1;
    f( x );
	f( y );
	ex = g(x);
	ey = g(y);
	for (i = ex, j = ey;i >= 0, j >= 0;i--, j--)/*?????????*/
	{
		if (i == 0 && j == 0 && x[i] == y[j])
			cout << x[i] << endl;
		else if (x[i] == y[j] && x[i-1] != y[j-1])
			{
				cout << x[i] <<endl;
				break;
			}
	}
	return 0;
}
void f(int z[11])          /*???????*/
{
	int i;
	for (i = 1;i < 11;i++)
	{
		z[i] = z[i-1] / 2;
	}
}
int g(int w[11])    /*????1???*/
{
	int i, m;
	for (i = 0;i < 11;i++)
	{
		if (w[i] != 0 && w[i+1] == 0)
		{
			m = i;
			break;
		}
	}
	return (m);
}