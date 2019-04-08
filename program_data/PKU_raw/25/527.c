
int a[105][105] = {0};
int main()
{
	int n;
	int len = 0;
	int i,j;
	int flag;
	cin >> n;
	a[1][1] = 2;
	for( i = 1; i<= n -1 ; i++)
	{
		for(j = 1; j <= n; j++)
		{
			a[i+1][j] = (a[i][j] * 2 + a[i+1][j]) % 10;
			a[i+1][j+1] = (a[i][j] * 2 / 10 + a[i+1][j+1]) % 10;
			
		}
	}

	for(i = n ; i >= 1; i--)
	{
		if(a[n][i] != 0)
		{
			flag = 1;
			len = i;
			break;
		}
	}
	for(i = len; i >= 1; i--)
		printf("%d",a[n][i]);
	
	if(n == 0)
	{
		printf("1\n");
	}
	

	return 0;
}

