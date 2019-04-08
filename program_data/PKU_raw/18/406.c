int main()
{
	int n,i,j,p,t,min,sum=0;
	int a[100][100];
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{	
		sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(t=0;t<n-1;t++)
		{
			for(i=0;i<n-t;i++)
			{	
				min=a[i][0];
				for(j=0;j<n-t;j++)
				{
					if(a[i][j]<min)
						min=a[i][j];
				}
				for(j=0;j<n-t;j++)
					a[i][j]=a[i][j]-min;
			}
			for(j=0;j<n-t;j++)
			{	
				min=a[0][j];
				for(i=0;i<n-t;i++)
				{
					if(a[i][j]<min)
						min=a[i][j];
				}
				for(i=0;i<n-t;i++)
					a[i][j]=a[i][j]-min;
			}
			
			sum+=a[1][1];
			for(i=0;i<n-t;i++)
				for(j=1;j<n-t;j++)
					a[i][j]=a[i][j+1];
			for(j=0;j<n-t;j++)
				for(i=1;i<n-t;i++)
					a[i][j]=a[i+1][j];
		}
		printf("%d\n",sum);
	}
	return 0;
}



		
