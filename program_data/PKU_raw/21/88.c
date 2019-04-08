void main()
{
	int n,i,j=0,m,t,p=1,q;
	float k,c,d;
	int a[300];
	float b[300];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
		scanf("%d",&a[i]);
	}
    for(i=1;i<=n;i++)
	{
		j=j+a[i];
	}
	c=j;
	d=n;
	k=c/d;
	
	 for(i=1;i<=n;i++)
	{
		if(a[i]>=k)
		{
			b[i]=a[i]-k;
		}
		else
			b[i]=k-a[i];
	}
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		if(b[j]<b[j+1])
		{
			t=b[j];
			q=a[j];
			b[j]=b[j+1];
			a[j]=a[j+1];
			b[j+1]=t;
			a[j+1]=q;
		}
	}


    for(i=1;i<=n;i++)
    {
		if(b[i]==b[i+1])
		p++;
	else
		break;
	}
	for(i=1;i<=p;i++)
	{
		for(j=1;j<=p-i;j++)
		if(a[j]>b[j+1])
		{
			t=a[j];
			
		
			a[j]=a[j+1];
			a[j+1]=t;
		
		}
	}

	if(p==1)
		printf("%d",a[1]);
	if(p!=1)
	{
		for(i=1;i<p;i++)
		{
			printf("%d,",a[i]);
		}
	printf("%d",a[p]);
	}
}