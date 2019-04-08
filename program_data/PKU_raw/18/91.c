int cut(int num[100][100],int n)
{
	int m=0,i=0,k=0,sum=0,j=0;
	int l[100],s[100];
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			l[j]=0;
			s[j]=0;
		}
		for(j=0;j<n;j++)
		{
			if(num[j][0]>=0)
			{	
				l[j]=num[j][0];
				for(k=0;k<n;k++)
				{
					if(num[j][k]>=0&&num[j][k]<l[j])
						l[j]=num[j][k];
				}
				for(k=0;k<n;k++)
				{
					num[j][k]=num[j][k]-l[j];
				}
			}
		}
		cout<<endl;
		for(j=0;j<n;j++)
		{
			if(num[0][j]>=0)
			{	
				s[j]=num[0][j];
				for(k=0;k<n;k++)
				{
					if(num[k][j]>=0&&num[k][j]<s[j])
						s[j]=num[k][j];
				}
				for(k=0;k<n;k++)
				{
					num[k][j]=num[k][j]-s[j];
				}
			}
		}
		sum=sum+num[i][i];
		for(j=0;j<n;j++)
		{
			num[i][j]=-10;
			num[j][i]=-10;
		}
	}
	return sum;
}
int main()
{
	int n=0,i=0,j=0,k=0,sum=0;
	int num[100][100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<100;j++)
			for(k=0;k<100;k++)
				num[j][k]=-10;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>num[j][k];
		sum=cut(num,n);
		cout<<sum<<endl;
	}
	return 0;
}
