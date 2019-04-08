void main()
{
	int n,i,a[400],j=0,l=0,b[400],g,c;
	float s=0,m,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	s=s/n;
	for(i=0;i<n;i++)
	{
		m=a[i]-s;
		if((k>=0)&&(m>=k||m<=-k))
		{
			k=m;
		}
		else if((k<0)&&(m<=k||m>=-k))
		{	k=m;
		}
	}
	for(i=0;i<n;i++)
	{
		m=a[i]-s;
		if(m==k||m==-k)
		{
			b[j]=a[i];j++;
		}
	}
	for(i=0;i<j;i++)
	{
		for(g=0;g<i;g++)
		{
			if(b[g]>=b[i])
			{
                c=b[g];b[g]=b[i];b[i]=c;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		if(i!=j-1)
			printf("%d,",b[i]);
		else printf("%d",b[i]);
		
	}
}