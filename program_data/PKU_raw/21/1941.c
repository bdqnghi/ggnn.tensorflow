void main()
{
	int n,i,s=0,j=0,t,k;
	int a[301],c[300];
	float b[301];
	float average,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	average=(float)s/n;
	for(i=0;i<n;i++)
	{
		if((float)a[i]<average)
			b[i]=average-(float)a[i];
		else
			b[i]=(float)a[i]-average;
	}
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(max<b[i])
			max=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			c[j]=a[i];
			j++;
		}
	}
	if(j==1) printf("%d",c[0]);
	else
	{
		for(k=1;k<=j-1;k++)
		{
			for(i=0;i<=j-k-1;i++)
			{
				if(c[i]>c[i+1])
				{t=c[i]; c[i]=c[i+1]; c[i+1]=t;}
			}
		}
		for(i=0;i<=j-2;i++)
			printf("%d,",c[i]);
		printf("%d\n",c[j-1]);
	}
}

