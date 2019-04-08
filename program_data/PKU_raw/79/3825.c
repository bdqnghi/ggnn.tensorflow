void main()
{
	int a[100][300],b[100],c[100],i=0,j=0,k=0,m=0,n=0;
	do{
		scanf("%d %d",&b[i],&c[i]);
		i++;
	}
	while(b[i-1]!=0&&c[i-1]!=0);
	m=i-1;
	for(i=0;i<m;i++)
	{
		for(j=1;j<=b[i];j++)
		{
			a[i][j-1]=j;
		}
	}
	for(i=0;i<m;i++)
	{
		n=b[i];
		for(j=0,k=0;n>1;j++)
		{
            if(j>=b[i]) j=j-b[i];
			if(a[i][j]!=0) k++;
			if(k==c[i])
			{
				a[i][j]=0;
				n=n-1;
				k=0;
			}	
		}
	}
	for(i=0;i<m;i++)
		for(j=0;j<b[i];j++)
			if(a[i][j]!=0) printf("%d\n",a[i][j]);
	
}