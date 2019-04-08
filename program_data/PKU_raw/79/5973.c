int main()
{
	
				//i??????
	while (1)
	{
		int m,n,j=1,count,k = 1 ,i=0,a[301] = {0};
		cin>> n>>m;
		if (n ==0)break;
		count=n;
		j=0;
		while(count > 1)
		{
			i++;
			while(1)
			{
				if (k > n) k-=n;
				if (!a[k]) break;
				k++;
			}
			if (i == m)
			{
				a[k] = 1;
				i = 0;
				count--;
				k++;
				continue;
			}
			k++;
		}
		for (i = 1; i <= n; i++)
		{	
			if (!a[i]) cout << i << endl;
		}
	}
	return 0;
}