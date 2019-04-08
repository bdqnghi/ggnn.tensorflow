main()
{
	int m,n,a[300],i,j,k,p;
	for(;;)
	{
		scanf("%d%d",&n,&m);
		if(m==0&&n==0)
			break;
		for(i=0;i<n;i++)
		{
			a[i]=i+1;
		}
		p=0;
		for(k=1;k<n;k++)
		{
			for(i=0;i<m;)
			{
				p=p%n;
				if(a[p]!=0)
					i++;
				if(i==m)
					a[p]=0;
				p++;
			}
		}
		for(j=0;j<n;j++)
		{
			if(a[j]!=0)
	printf("%d\n",a[j]);
	}

}
return 0;
}
