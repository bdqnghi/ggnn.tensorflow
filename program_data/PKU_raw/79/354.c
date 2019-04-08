void main()
{
	int n,m,a[321],i,k,count;
	

	do
	{
		scanf("%d%d",&n,&m);
		if (m==0&&n==0) break;

		k=1;
		for (i=1;i<=n;i++)
			a[i]=0;

		for (i=1;i<n;i++)
		{
			count=0;
			do 
			{
				if(a[k]==0)count++;
				if (count!=m)k++;
				if (k>n)k=1;
			}while(count<m);
			a[k]=1;
		
		}

		for(i=1;i<=n;i++)
			if (a[i]==0)
				printf("%d",i);
		printf("\n");
	
	}while(1);
}