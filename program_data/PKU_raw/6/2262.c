//***********************************************************************
//???????? 
//???????? 
//??????
//***********************************************************************
int main()
{
	int k, m, n, *p;
	cin>>k;
	for(int i = 0; i < k; i++)
	{
		cin>>m>>n;
		int sum = 0;
		int a[100][100] = {0};
		for(int j = 0; j < m; j++)
			for(int l = 0; l < n; l++)
				cin>>a[j][l];
		p = a[0];
		for(int j = 0; j < n; j++)
			sum += *p++;
		if(m - 1 != 0)
		{
		    p = a[m - 1];
		    for(int j = 0; j < n; j++)
			   sum += *p++;
		}
		    for(int j = 1; j < m - 1; j++)
		   {
			   p = a[j];
			  // cout<<*p<<' '<<*(p + n - 1)<<endl;
			   sum += *p;
			   sum += *(p + n - 1);
		}
		cout<<sum<<endl;
	}
    return 0; 
} 