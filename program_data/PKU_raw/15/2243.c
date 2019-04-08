int main()
{
	int n, i, j,a[1002][1002] = {0},flag=0,er,ec,sr,sc;
	cin >>n;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>*(*(a+i)+j);
		}
	}

	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(*(*(a+i)+j) == 0)
			{
				sr = i;
				sc = j;
				flag=1;
				break;
			}
		
		}
		if(flag) break;
	}

	flag = 0;

	
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if ( *(*(a+i)+j) == 0)
			{
				er =i;
				ec=j;
				flag=1;
				break;
			}
		}
		if(flag) break;
	}

	cout << (er-sr-1)*(ec-sc-1);
	return 0;
}





