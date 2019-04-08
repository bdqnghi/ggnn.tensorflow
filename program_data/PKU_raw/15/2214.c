int main()
{
	int n , i , j ,flag = 0;
	int a[500][500];
	int sum[500] ={0};
	int l, s, h;
	
	cin >> n;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++) 
			cin >> a[i][j];
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++) 
		{
			if(	a[i][j] == 0)
				sum[i]++;
		}
		
		if( sum[i] > 2 && flag == 0)
		{
			l = i;
			flag = 1;
		}
		else if( sum[i] > 2 && flag == 1)
		{
			l = i - l - 1;
			h = sum[i] - 2;
		}
	}
	s = h * l;
	if(flag == 1)
		printf("%d\n",s);
	
	else 
		printf("0\n");
	return 0;
}
			












		

