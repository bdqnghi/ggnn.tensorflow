int main()
{
	int  a[100][100],n,m,i,j,k,p,q,sum=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	p=(n-1)/2;
	q=(m-1)/2;
	for(k=0;k<=p&&k<=q;k++)
	{
		for(i=k,j=k;j<m-k;j++)
		{
			sum++;
			printf("%d\n",a[i][j]);
			if(sum==n*m)
			{
				goto end;
			}
		}
		for(j=m-1-k,i=k+1;i<n-k;i++)
		{
			
			sum++;
			printf("%d\n",a[i][j]);
			if(sum==n*m)
			{
				goto end;
			}
		}
		
		for(i=n-1-k,j=m-k-2;j>=k;j--)
		{
			sum++;
			printf("%d\n",a[i][j]);
			if(sum==n*m)
			{
				goto end;
			}
		}
	
		for(j=k,i=n-k-2;i>=k+1;i--)
		{
			sum++;
			printf("%d\n",a[i][j]);
			if(sum==n*m)
			{
				goto end;
			}
		}
	}
	end:
	return 0;
}

		