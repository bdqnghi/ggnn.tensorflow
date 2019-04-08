void f(char a[500])
{
	int i,j,k,m,n,flag = 1,c;
	cin >> a;
	int b = strlen(a);
	for (j = 2;j <= b ;j++)
	 for (i = 0;i + j <= b;i++)
		{c = 1;
		for (m = i,n = i + j - 1;m < n;m++,n--)
		{
			if (a[m] != a[n])
			{
				c = 0;
				break;
			}
                  }
		if (c)
		{
			if (flag)
			{
				flag = 0;
				for (k = i;k < i + j;k++)
					cout << a[k];
			}
			else
			{
				cout <<endl;
				for (k = i;k < i + j;k++)
					cout <<  a[k];
			}
		}
		}
}
	int main ()
	{
		char a[500];
		f(a);
		return 0;
	}