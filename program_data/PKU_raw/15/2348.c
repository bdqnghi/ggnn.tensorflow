//2013.12.9
//zwb

int main ()
{
	int a[101][101] = {0};
	int n, i, j, cnt = 0, flag = 0;
	int firstx = 0, firsty = 0, lastx = 0, lasty = 0;
	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
			cin >> a[i][j];
	}

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(a[i][j] == 0)
			{
				flag = 1;
				firstx = i;
				firsty = j;
				break;
			}
		}
		if(flag == 1)
			break;
	}

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(a[i][j] == 0)
			{
				lastx = i;
				lasty = j;
			}
		}
	}

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(a[i][j] == 0)
				cnt++;
		}
	}

	cout << (lastx - firstx + 1) * (lasty - firsty + 1) - cnt << endl;
	return 0;
}

	
	

