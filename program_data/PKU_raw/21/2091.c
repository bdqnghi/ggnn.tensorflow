void main()
{
    int n,i,j,k,m;
	unsigned int a[301],c[301],t,b=0,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b=b+a[i];
	d=abs(a[0]*n-b);
	for(i=1;i<n;i++)
		if(abs(a[i]*n-b)>d) d=abs(a[i]*n-b);
	j=0;
	for(i=0;i<n;i++)
		if(abs(a[i]*n-b)==d)
		{
			c[j]=a[i];
			j++;
		}
	for(i=0;i<j-1;i++)
	{
		k=i;
		for(m=i+1;m<j;m++)
			if(c[m]<c[k]) k=m;
		t=c[k];c[k]=c[i];c[i]=t;
	}
	for(i=0;i<j;i++)
		if(i!=j-1) printf("%d,",c[i]);
		else printf("%d\n",c[i]);
}