int main()
{
	int a[1000][1000],sum=0,p=1,z,k,w,l,min;
	int i,j,n;
	cin >>n;
	for(w=0;w<n;w++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cin >> a[i][j];
		}
		for(z=0;z<n-1;z++)
		{
		for(i=0;i<n;i++)
		{
			min =1000;
			for(j=0;j<n;j++)
			{

				if(a[i][j]<min)
					min=a[i][j];
			}
			for(k=0;k<n;k++)
				a[i][k]-=min;
		}
		for(i=0;i<n;i++)
		{
			min =1000;
			for(j=0;j<n;j++)
			{

				if(a[j][i]<min)
					min=a[j][i];
				
			}
			for(k=0;k<n;k++)
				a[k][i]-=min;
		}
		sum+=a[p][p];
		for(l=0;l<n;l++)
			a[l][p]=100000;
		for(l = 0;l<n;l++)
			a[p][l] = 100000;
		p++;
		}
		cout << sum <<endl;
		p=1;
		sum=0;
		memset(a,1000000,sizeof(a));
	}

	return 0;
}

