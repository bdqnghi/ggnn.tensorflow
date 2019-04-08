int a[101][101];
int main()
{
	int n,i,j,b,k,l,m,s;
	cin>>n;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				cin>>a[j][k];
			}
		}

		s=n, b=0;
		for(j=0;j<n-1;j++)
		{
			for(k=0;k<s;k++)
			{
				m=999999;
				for(l=0;l<s;l++)
					if(a[k][l]<m) m=a[k][l];

				for(l=0;l<s;l++)
					a[k][l]-=m;
			}
			for(k=0;k<s;k++)
			{
				m=999999;
				for(l=0;l<s;l++)
					if(a[l][k]<m) m=a[l][k];
				
				for(l=0;l<s;l++)
					a[l][k]-=m;
			}
			
		//	for(int x = 0; x < n; x++, printf("\n"))
			//	for(int y = 0; y < n; y++)
				//	printf("%d ", a[x][y]);

			b+=a[1][1];

			for(k=0;k<s;k++)
			{
				for(l=0;l<s;l++)
				{
					if(k==0&&l>1)
					{
						a[k][l-1]=a[k][l];
					}
					else if(k>1&&l==0)
					{
						a[k-1][l]=a[k][l];
					}
					else if(k>1&&l>1)
					{
						a[k-1][l-1]=a[k][l];
					}
				}
			}
			s--;
		}
		cout<<b<<endl;
	}
		return 0;
}