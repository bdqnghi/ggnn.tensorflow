int a[102][102], b[101], c[101], n;
void f(int a[102][102]);
int main()
{
	int i=0, j=0, k=0;
	cin>>n;
	for(k=0; k<n; k++)
	{
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				cin>>a[i][j];
		f(a);
	}

return 0;
}
void f(int a[][102])
{
	int i=0, j=0, k=0, sum=0;
	for(k=1; k<n; k++)
	{
		for(i=0; i<n; i++)
		{
			if(i>=k || i==0)
			{
				b[i]=a[i][0];
				for(j=1; j<n; j++)
					if(a[i][j]<b[i])
						b[i]=a[i][j];

				for(j=0; j<n; j++)
					a[i][j]-=b[i];
			}
		}
		for(j=0; j<n; j++)
		{
			if(j>=k || j==0)
			{
				c[j]=a[0][j];   
				for(i=0; i<n; i++)
				{
					if(c[j]> a[i][j])
						c[j]= a[i][j];
				}
				for(i=0; i<n; i++)
					a[i][j]-=c[j];
			}
		}
		 sum+=a[k][k];
		 //cout<<sum<<' '<<k<<' ';
		for(i=0; i<n; i++)
		{
			a[i][k]=1000000;
			a[k][i]=1000000;
		}
	}
	cout<<sum<<endl;
}

