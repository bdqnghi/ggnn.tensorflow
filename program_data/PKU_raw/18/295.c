
int main()
{
	int n,i,j,k,m,sum=0;
	int a[100][100],b[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{cin>>a[j][k];}
		}
		for(m=0;m<n-1;m++)
		{
		for(j=0;j<n-m;j++)
		{
			b[j]=a[j][0];
			for(k=1;k<n-m;k++)
			{
				if(a[j][k]<b[j])
				{b[j]=a[j][k];}
			}
		}
		for(j=0;j<n-m;j++)
		{
			for(k=0;k<n-m;k++)
			{a[j][k]=a[j][k]-b[j];}
		}
		for(j=0;j<n-m;j++)
		{
			b[j]=a[0][j];
			for(k=1;k<n-m;k++)
			{
				if(a[k][j]<b[j])
				{b[j]=a[k][j];}
			}
		}
		for(j=0;j<n-m;j++)
		{
			for(k=0;k<n-m;k++)
			{a[k][j]=a[k][j]-b[j];}
		}
		sum+=a[1][1];
		for(j=1;j<n-1-m;j++)
		{
			for(k=0;k<n-m;k++)
			{a[j][k]=a[j+1][k];}
		}
		for(j=1;j<n-1-m;j++)
		{
			for(k=0;k<n-1-m;k++)
			{a[k][j]=a[k][j+1];}
		}
		}
		cout<<sum<<endl;
	}
	return 0;
}




