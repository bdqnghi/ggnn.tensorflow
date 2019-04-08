int main()
{
	int a[101][101]={0},n,i,j,k,l,m,b,c,s;
    cin>>n;
	for(i=1;i<=n;i++)
	{
		s = 0;
		for(j=0;j<=n*n-1;j++)
			cin>>a[j/n][j%n];
		for(j=1;j<=n-1;j++)
		{
			for(k=0;k<=n-1;k++)
			{
				b=999999;
				for(l=0;l<=n-1;l++)
				{
					if(a[k][l]==999999)
						continue;
					if(a[k][l]<b)
						b=a[k][l];
				}
				for(l=0;l<=n-1;l++)
				{
					if(a[k][l]==999999)
						continue;					
					a[k][l]=a[k][l]-b;
				}
			}
			for(k=0;k<=n-1;k++)
			{
				c=999999;
				for(l=0;l<=n-1;l++)
				{
					if(a[l][k]==999999)
						continue;
					if(a[l][k]<c)
						c=a[l][k];
				}
				for(l=0;l<=n-1;l++)
				{
					if(a[k][l]==999999)
						continue;
					a[l][k]=a[l][k]-c;
				}
			}
			s = s + a[j][j];
			for(m=0;m<=n-1;m++)
				a[j][m]=999999;
			for(m=0;m<=n-1;m++)
				a[m][j]=999999;
		}
		cout<<s<<endl;
	}
	return 0;
}