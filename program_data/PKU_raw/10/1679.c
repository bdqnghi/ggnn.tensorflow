void main()
{
	int n,a[30],i,b[30],j;	
	scanf("%d",&n);		
	for(i=0;i<n;i++)	
	{	
	scanf("%d",&a[i]);	
	b[i]=1;
	}	
	for(i=0;i<n;i++)	
	{
		for(j=0;j<i;j++)
	
		{
			if(a[j]>=a[i])
			{
				if(b[j]>=b[i])
					b[i]=b[j]+1;
			}
		}
	}
	
	for(j=0;j<n-1;j++)	
	{
		if(b[j]>b[j+1])
		b[j+1]=b[j];
	}	
	printf("%d\n",b[n-1]);
}