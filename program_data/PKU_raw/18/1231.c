//*************************************************
//***????????????***
//***??????***
//***???2012.11.22***
//*************************************************
int a[100][100];
int main ()
{
	void G(int n);                          //????G(n)???X(n)??
	void X(int n);
	int n,i,j,k,sum;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		sum = 0;
		for (i = 0; i < n; i++)             //????
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (i = n; i >= 2; i--)            //??n-1?????????
		{
			G(i);
			sum += a[1][1];
			X(i);
		}
		cout << sum << endl;
	}
	return 0;
}

void G(int n)                              //G(n)??n???a[n-1][n-1]?0
{
	int i,j,p;
	for (i = 0; i < n; i++)
	{
		p = a[i][0];
		for (j = 1; j < n; j++)
		{
			if (a[i][j] < p)
				p = a[i][j];               //?????
		}
		for (j = 0; j < n; j++)
			a[i][j] -= p;                  //??
	}
	for (i = 0; i < n; i++)
	{
		p = a[0][i];
		for (j = 1; j < n; j++)
		{
			if (a[j][i] < p)
				p = a[j][i];               //?????
		}
		for (j = 0; j < n; j++)
			a[j][i] -= p;                  //??
	}
}

void X(int n)                              //X(n)??n????a[n-1][n-1]
{
	int i,j;
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= n - 1; j++)
		{
			a[i][j] = a[i + 1][j + 1];
		}
	}
	for (i = 1; i <= n - 1; i++)
	{
		a[0][i] = a[0][i + 1];
		a[i][0] = a[i + 1][0];
	}
}