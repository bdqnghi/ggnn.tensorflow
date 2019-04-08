int a[100][100],sum;
void f(int m)
{
	int i,j,min;
	if(m>1)
	{
		for(i=0;i<m;i++)
		{
			min=a[i][0];
			for(j=0;j<m;j++)
				if(a[i][j]<min)
					min=a[i][j];
			if(min!=0)
				for(j=0;j<m;j++)
					a[i][j]=a[i][j]-min;
		}
		for(j=0;j<m;j++)
		{
			min=a[0][j];
			for(i=0;i<m;i++)
				if(a[i][j]<min)
					min=a[i][j];
			if(min!=0)
				for(i=0;i<m;i++)
					a[i][j]=a[i][j]-min;
		}
		sum=sum+a[1][1];
		for(j=2;j<m;j++)
			a[0][j-1]=a[0][j];
		for(i=2;i<m;i++)
			a[i-1][0]=a[i][0];
		for(i=2;i<m;i++)
			for(j=2;j<m;j++)
				a[i-1][j-1]=a[i][j];
		f(m-1);
	}
}

int main()
{
	int n,i,j,k;
	cin>>n;
	for(k=1;k<=n;k++)
	{
		sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		f(n);
		cout<<sum<<endl;
	}
	return 0;
}



