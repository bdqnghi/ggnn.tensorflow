int sum;
int a[100][100],b[100];
void cut(int);
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{cin>>a[j][k];}
		}
		cut(n);
		cout<<sum<<endl;
	}
	return 0;
}


void cut(int n)
{
	if(n>1)
	{
		int j,k;
		for(j=0;j<n;j++)
		{
			b[j]=a[j][0];
			for(k=1;k<n;k++)
			{
				if(a[j][k]<b[j])
				{b[j]=a[j][k];}
			}
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{a[j][k]=a[j][k]-b[j];}
		}
		for(j=0;j<n;j++)
		{
			b[j]=a[0][j];
			for(k=1;k<n;k++)
			{
				if(a[k][j]<b[j])
				{b[j]=a[k][j];}
			}
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{a[k][j]=a[k][j]-b[j];}
		}
		sum+=a[1][1];
		for(j=1;j<n-1;j++)
		{
			for(k=0;k<n;k++)
			{a[j][k]=a[j+1][k];}
		}
		for(j=1;j<n-1;j++)
		{
			for(k=0;k<n-1;k++)
			{a[k][j]=a[k][j+1];}
		}
		cut(n-1);
	}
}
