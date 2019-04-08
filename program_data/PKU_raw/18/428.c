int operation(int a[100][100],int m);
int main()
{
	int n,i,j,k,sum;
	int a[100][100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=0;
		memset(a,-1,sizeof(a));
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>a[j][k];
		for(j=1;j<=n-1;j++)
			sum=sum+operation(a,n-j+1);
		cout<<sum<<endl;
	}
	return 0;
}
int operation(int a[100][100],int m)
{
	int i,j,temp,k,t;
	for(i=0;i<m;i++)//??0
	{
		int min=a[i][0];
		for(j=0;j<m;j++)//lie
		{
			if(a[i][j]<min)
				min=a[i][j];
		}
		for(j=0;j<m;j++)
			a[i][j]=a[i][j]-min;
	}
	for(j=0;j<m;j++)//??0
	{
		int min=a[0][j];
		for(i=0;i<m;i++)//hang
		{
			if(a[i][j]<min)
				min=a[i][j];
		}
		for(i=0;i<m;i++)
			a[i][j]=a[i][j]-min;
	}
	temp=a[1][1];
	int b[100][100];
	memset(b,-1,sizeof(b));
	for(i=0,t=0;i<m;i++,t++)
	{
		if(i==1)
		{
			t--;
			continue;
		}
		for(j=0,k=0;j<m;j++,k++)
		{
			if(j==1)
			{
				k--;
				continue;
			}
			else
				b[t][k]=a[i][j];
		}
	}
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			a[i][j]=b[i][j];
	return temp;
}
