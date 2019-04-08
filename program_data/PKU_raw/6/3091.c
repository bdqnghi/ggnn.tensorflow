//#define num 31

main()
{	
	int*p,i,all,m,n,cycle,ii;
	
	scanf("%d",&cycle);
	for(ii=0;ii<cycle;ii++)
	{
		scanf("%d %d",&m,&n);
		p=(int*)calloc(m*n,sizeof(int));
		for(i=0;i<m*n;i++)
			scanf("%d",p+i);
		all=0;
		for(i=0;i<n;i++)
			all+=*(p+i);
		if (m>1)
		{
			for(i=0;i<n;i++)
				all+=*(p+i+(m-1)*n);
		}
		for(i=2;i<m;i++)
			all+=*(p+(i-1)*n);
		if (n>1)
		{
			for(i=2;i<m;i++)
				all+=*(p+n-1+(i-1)*n);
		}
		printf("%d\n",all);
		free (p);
	}
	
	
}