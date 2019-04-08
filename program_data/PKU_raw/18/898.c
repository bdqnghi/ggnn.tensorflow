


int main()
{
	int m[100][100],min = 100000,sum = 0,r;
	int (*p)[100];
	int n;
	cin >> n;
	p = m;
	int i,j;
	int time;
	for (time = 1; time <= n;time++)
	{
		sum = 0;
		for (i = 0; i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				cin >> m[i][j];
			}
		}
		for(r = n;r > 1;r--)
		{
			for (i = 0; i < r;i++)
			{
				min = 100000;
				for (j = 0; j < r;j++)
				{
					if (*(*(p+i)+j) < min)
						min = *(*(p+i)+j);
				}
				for (j = 0; j < r;j++)
				{
					*(*(p+i)+j) -= min;
				}
			}
			for (i = 0; i < r;i++)
			{
				min = 100000;
				for (j = 0; j < r;j++)
				{
					if (*(*(p+j)+i) < min)
						min = *(*(p+j)+i);
				}
				for (j = 0; j < r;j++)
				{
					*(*(p+j)+i) -= min;
				}
			}
			sum += *(*(p+1 )+1);
			for (j = 0; j < r;j++)
			{

				for (i = 2; i < r;i++)
				{
					*(*(p + j)+i - 1) = *(*(p + j)+i);
				}
			}
			for (j = 2; j < r;j++)
			{
				for (i = 0; i < r;i++)
				{
					*(*(p + j - 1)+i) = *(*(p + j)+i);
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}



