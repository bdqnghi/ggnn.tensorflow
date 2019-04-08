void main()
{
	int a[30],b[30],c[300],d[300],i,n,m,x;
	for(i=0;i<30;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0)
		{
			n=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		for(m=1;m<=a[i];m++)c[m]=m;
		while(a[i]>=1)
		{
			x=(b[i]-1)%a[i]+1;
			for(m=1;m<=a[i];m++)
				d[m]=c[m];
			for(m=1;m<=a[i]-x;m++)
				c[m]=d[m+x];
			for(m=a[i]-x+1;m<=a[i]-1;m++)
				c[m]=d[m-a[i]+x];
			if(a[i]==1)
				printf("%d\n",c[1]);
			a[i]--;
		}
	}
}