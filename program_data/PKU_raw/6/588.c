int main()
{
    int a[100][100];
	int sum;
	int b,n,m,i,j,l;
    scanf("%d",&b);
	for(l=0;l<b;l++)
	{
        scanf("%d",&m);
		scanf("%d",&n);
        for(i=0;i<m;i++)
		{
	      for(j=0;j<n;j++)
		  {
			  scanf("%d",&a[i][j]);
		  }
		}
		sum=0;
		if (m==1&&n!=1)
		{
		  for(j=0;j<n;j++)
		  {
		  	sum+=a[0][j];
		  }
		  printf("%d\n",sum);
		}
		if (n==1&&m!=1)
		{
		  for(i=0;i<m;i++)
		  {
		  	sum+=a[0][1];
		  }
		  printf("%d\n",sum);
		}
		if(m==1&&n==1)
		{
			printf("%d\n",a[0][0]);
		}
		if(m>1&&n>1)
		{
		sum=0;
		for(j=1;j<n-1;j++)
		{
			sum+=a[0][j]+a[m-1][j];
		}
		for(i=1;i<m-1;i++)
		{
			sum+=a[i][0]+a[i][n-1];
		}
		sum=sum+a[0][0]+a[0][n-1]+a[m-1][0]+a[m-1][n-1];
        printf("%d\n",sum);
		}
	}
	return 0;
}
