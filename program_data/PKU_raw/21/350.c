void main()
{
	int n,i,s,m,a[300],sum=0,j[100],p=0,temp;
	double c,b[300];
	double max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		sum=sum+m;
		a[i]=m;
	}
	c=(float)sum/n;
	for(i=1;i<=n;i++)
	{
		b[i]=fabs(a[i]-c);
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]>=max) 
		{
			if(b[i]==max)  {p=p+1;j[p]=i;}
			else {max=b[i];j[p]=i;}
		}
	}
	for(i=1;i<p;i++)
	{
		for(s=0;s<(p-1-i);s++)
		{
			if(a[j[s]]>a[j[s+1]])  
			{
				temp=a[j[s]];
				a[j[s]]=a[j[s+1]];
				a[j[s+1]]=temp;
			}
		}
	}
	printf("%d",a[j[0]]);
	for(i=1;i<=p;i++)
	{
		printf(",%d",a[j[i]]);
	}

	
}