int Min(int a[],int n)
{
	int i,min;
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}

int main()
{
	int n,i,N,dd1,dd2,j,min;
	int row[100][100],col[100][100],sum[100];
	scanf("%d\n",&n);
	N=n;
	for(i=0;i<N;i++)
	{
		for(dd1=0;dd1<N;dd1++)
		{
			for(dd2=0;dd2<N;dd2++)
			{
				scanf("%d",&row[dd1][dd2]);
			}
		}
		sum[i]=0;
		n=N;
		for(j=0;j<N-1;j++)
		{
			for(dd1=0;dd1<n;dd1++)
			{
				if(Min(row[dd1],n)!=0)
				{
					min=Min(row[dd1],n);
					for(dd2=0;dd2<n;dd2++)
					{
						row[dd1][dd2]-=min;
					}
				}
			}
			for(dd1=0;dd1<n;dd1++)
			{
				for(dd2=0;dd2<n;dd2++)
				{
					col[dd2][dd1]=row[dd1][dd2];
				}
			}
			for(dd1=0;dd1<n;dd1++)
			{
				if(Min(col[dd1],n)!=0)
				{
					min=Min(col[dd1],n);
					for(dd2=0;dd2<n;dd2++)
					{
						col[dd1][dd2]-=min;
					}
				}
			}
			for(dd1=0;dd1<n;dd1++)
			{
				for(dd2=0;dd2<n;dd2++)
				{
					row[dd1][dd2]=col[dd2][dd1];
				}
			}
			sum[i]+=row[1][1];
			for(dd1=0;dd1<n-1;dd1++)
			{
				for(dd2=0;dd2<n-1;dd2++)
				{
					if(dd1>=1&&dd2==0)
					{
						row[dd1][dd2]=row[dd1+1][dd2];
					}
					if(dd2>=1&&dd1==0)
					{
						row[dd1][dd2]=row[dd1][dd2+1];
					}
					if(dd1>=1&&dd2>=1)
					{
						row[dd1][dd2]=row[dd1+1][dd2+1];
					}
				}
			}
			n--;					
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d\n",sum[i]);
	}
	return 0;
}






		
		


