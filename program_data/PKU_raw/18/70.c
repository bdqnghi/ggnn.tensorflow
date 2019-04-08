/*???????
1000010098
???*/
void change(int a[][100], int n, int step, int *sum)
{
	int i, j, min, g;
	for (i = 0; i < n; i++)
	{
		g = 0;
		if(i >= 1 && i < step)
		continue;
		for(j = 0; j < n; j++)
		{
			if(j >= 1 && j < step)
				continue;
			if(a[i][j] == 0)
			{
				g = 1;
				break;
			}
			if(j == 0)
				min = a[i][j];
			if(a[i][j] < min)
				min = a[i][j];
		}
		if(g == 1)
			continue;
		for(j = 0; j < n; j++)
		{
			if(j >= 1 && j < step)
				continue;
			a[i][j] -= min;
		}
	}
	for (i = 0; i < n; i++)
	{
		g = 0;
		if(i >= 1 && i < step)
		continue;
		for(j = 0; j < n; j++)
		{
			if(j >= 1 && j < step)
				continue;
			if(a[j][i] == 0)
			{
				g = 1;
				break;
			}
			if(j == 0)
				min = a[j][i];
			if(a[j][i] < min)
				min = a[j][i];
		}
		if(g == 1)
			continue;
		for(j = 0; j < n; j++)
		{
			if(j >= 1 && j < step)
				continue;
			a[j][i] -= min;
		}
	}
	*sum += a[step][step];
	return;
}


			

int main ()
{
	int n, i, j , k, a[100][100], sum;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		sum = 0;
		memset(a,0,40000);
		for(j = 0; j < n; j++)
		{
			for(k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
		}
		for(j = 1; j < n; j++)
		{
			change(a,n,j,&sum);
		}
		cout << sum << endl;
	}
	return 0;
}

